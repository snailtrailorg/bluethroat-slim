/*

SPDX-License-Identifier: MIT

MIT License

Copyright (c) 2021 Rop Gonggrijp. Based on esp_i2c_helper by Mika Tuupola.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <stdint.h>
#include <stddef.h>

#include <esp_log.h>

#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include "freertos/task.h"
#include <driver/i2c.h>

#include <sdkconfig.h>

#include "drivers/esp_i2c.h"


#if defined __has_include
	#if __has_include ("esp_idf_version.h")
		#include "esp_idf_version.h"
		#if ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(4, 3, 0)
			#define HAS_CLK_FLAGS
		#endif
	#endif
#endif

static const char * esp_i2c_tag = "ESP_I2C";

#define ESP_I2C_LOGE(format, ...) ESP_LOGE(esp_i2c_tag, format, ##__VA_ARGS__)
#define ESP_I2C_LOGW(format, ...) ESP_LOGW(esp_i2c_tag, format, ##__VA_ARGS__)
#define ESP_I2C_LOGI(format, ...) ESP_LOGI(esp_i2c_tag, format, ##__VA_ARGS__)
#define ESP_I2C_LOGD(format, ...) ESP_LOGD(esp_i2c_tag, format, ##__VA_ARGS__)
#define ESP_I2C_LOGV(format, ...) ESP_LOGV(esp_i2c_tag, format, ##__VA_ARGS__)

//#ifdef _DEBUG
#define ESP_I2C_ASSERT(condition, format, ...) do { if (!(condition)) { ESP_I2C_LOGE(format, ##__VA_ARGS__); } } while (0)
//#else
//#define ESP_I2C_ASSERT(condition, format, ...) void
//#endif

static SemaphoreHandle_t eps_i2c_mutex[I2C_NUM_MAX];

static void eps_i2c_send_address(i2c_cmd_handle_t cmd, uint16_t addr, i2c_rw_t rw) {
	if (addr & ESP_I2C_ADDR_10_BIT_FLAG) {
		i2c_master_write_byte(cmd, 0xF0 | ((addr & 0x3FF) >> 7) | rw, true);
		i2c_master_write_byte(cmd, addr & 0xFF, true);
	} else {
		i2c_master_write_byte(cmd, (addr << 1) | rw, true);
	}
}

static void esp_i2c_send_register(i2c_cmd_handle_t cmd, uint32_t reg) {
	if (reg & ESP_I2C_REG_16_BIT_FLAG) {
	    i2c_master_write_byte(cmd, (reg & 0xFF00) >> 8, true);
	}
    i2c_master_write_byte(cmd, reg & 0xFF, true);
}

esp_err_t esp_i2c_init(i2c_port_t port) {

	ESP_I2C_ASSERT(port < I2C_NUM_MAX, "Invalid I2C port number: %d, Maximum valid port number is: %d.", port, I2C_NUM_MAX-1);
	ESP_I2C_ASSERT((port == I2C_NUM_0 && CONFIG_ESP_I2C_PORT_0_ENABLED) || (port == I2C_NUM_1 && CONFIG_ESP_I2C_PORT_1_ENABLED), "I2C port %d not enabled in config file.", port);

	esp_err_t ret = ESP_OK;

	if (eps_i2c_mutex[port] == NULL) {

		ESP_I2C_LOGI("Starting I2C master %d.", port);

		eps_i2c_mutex[port] = xSemaphoreCreateMutex();

		i2c_config_t conf = {0};

		conf.mode = I2C_MODE_MASTER;

		if (port == I2C_NUM_0) {
			conf.sda_io_num = CONFIG_ESP_I2C_PORT_0_SDA;
			conf.scl_io_num = CONFIG_I2C_MANAGER_0_SCL;
			conf.sda_pullup_en = I2C_MANAGER_0_PULLUPS ? GPIO_PULLUP_ENABLE : GPIO_PULLUP_DISABLE;
			conf.scl_pullup_en = conf.sda_pullup_en;
			conf.master.clk_speed = CONFIG_I2C_MANAGER_0_FREQ_HZ;
		} else if (port == I2C_NUM_1) {
			conf.sda_io_num = CONFIG_I2C_MANAGER_1_SDA;
			conf.scl_io_num = CONFIG_I2C_MANAGER_1_SCL;
			conf.sda_pullup_en = I2C_MANAGER_1_PULLUPS ? GPIO_PULLUP_ENABLE : GPIO_PULLUP_DISABLE;
			conf.scl_pullup_en = conf.sda_pullup_en;
			conf.master.clk_speed = CONFIG_I2C_MANAGER_1_FREQ_HZ;
		}

		#ifdef HAS_CLK_FLAGS
			conf.clk_flags = 0;
		#endif

		ret = i2c_param_config(port, &conf);
		ret |= i2c_driver_install(port, conf.mode, 0, 0, 0);

		if (ret != ESP_OK) {
			ESP_LOGE(TAG, "Failed to initialise I2C port %d.", (int)port);
			ESP_LOGW(TAG, "If it was already open, we'll use it with whatever settings were used "
			              "to open it. See I2C Manager README for details.");
		} else {
			ESP_LOGI(TAG, "Initialised port %d (SDA: %d, SCL: %d, speed: %d Hz.)",
					 port, conf.sda_io_num, conf.scl_io_num, conf.master.clk_speed);
		}

	}

    return ret;
}

esp_err_t I2C_FN(_read)(i2c_port_t port, uint16_t addr, uint32_t reg, uint8_t *buffer, uint16_t size) {

	I2C_PORT_CHECK(port, ESP_FAIL);

    esp_err_t result;

    // May seem weird, but init starts with a check if it's needed, no need for that check twice.
	I2C_FN(_init)(port);

   	ESP_LOGV(TAG, "Reading port %d, addr 0x%03x, reg 0x%04x", port, addr, reg);

	TickType_t timeout = 0;
	#if defined (I2C_ZERO)
		if (port == I2C_NUM_0) {
			timeout = I2C_MANAGER_0_TIMEOUT;
		}
	#endif
	#if defined (I2C_ONE)
		if (port == I2C_NUM_1) {
			timeout = I2C_MANAGER_1_TIMEOUT;
		}
	#endif

	if (I2C_FN(_lock)((int)port) == ESP_OK) {
		i2c_cmd_handle_t cmd = i2c_cmd_link_create();
		if (!(reg & I2C_NO_REG)) {
			/* When reading specific register set the addr pointer first. */
			i2c_master_start(cmd);
			i2c_send_address(cmd, addr, I2C_MASTER_WRITE);
			i2c_send_register(cmd, reg);
		}
		/* Read size bytes from the current pointer. */
		i2c_master_start(cmd);
		i2c_send_address(cmd, addr, I2C_MASTER_READ);
		i2c_master_read(cmd, buffer, size, I2C_MASTER_LAST_NACK);
		i2c_master_stop(cmd);
		result = i2c_master_cmd_begin(port, cmd, timeout);
		i2c_cmd_link_delete(cmd);
		I2C_FN(_unlock)((int)port);
	} else {
		ESP_LOGE(TAG, "Lock could not be obtained for port %d.", (int)port);
		return ESP_ERR_TIMEOUT;
	}

    if (result != ESP_OK) {
    	ESP_LOGW(TAG, "Error: %d", result);
    }

	ESP_LOG_BUFFER_HEX_LEVEL(TAG, buffer, size, ESP_LOG_VERBOSE);

    return result;
}

esp_err_t I2C_FN(_write)(i2c_port_t port, uint16_t addr, uint32_t reg, const uint8_t *buffer, uint16_t size) {

	I2C_PORT_CHECK(port, ESP_FAIL);

    esp_err_t result;

    // May seem weird, but init starts with a check if it's needed, no need for that check twice.
	I2C_FN(_init)(port);

    ESP_LOGV(TAG, "Writing port %d, addr 0x%03x, reg 0x%04x", port, addr, reg);

	TickType_t timeout = 0;
	#if defined (I2C_ZERO)
		if (port == I2C_NUM_0) {
			timeout = (CONFIG_I2C_MANAGER_0_TIMEOUT) / portTICK_RATE_MS;
		}
	#endif
	#if defined (I2C_ONE)
		if (port == I2C_NUM_1) {
			timeout = (CONFIG_I2C_MANAGER_1_TIMEOUT) / portTICK_RATE_MS;
		}
	#endif

	if (I2C_FN(_lock)((int)port) == ESP_OK) {
		i2c_cmd_handle_t cmd = i2c_cmd_link_create();
		i2c_master_start(cmd);
		i2c_send_address(cmd, addr, I2C_MASTER_WRITE);
		if (!(reg & I2C_NO_REG)) {
			i2c_send_register(cmd, reg);
		}
		i2c_master_write(cmd, (uint8_t *)buffer, size, ACK_CHECK_EN);
		i2c_master_stop(cmd);
		result = i2c_master_cmd_begin( port, cmd, timeout);
		i2c_cmd_link_delete(cmd);
		I2C_FN(_unlock)((int)port);
	} else {
		ESP_LOGE(TAG, "Lock could not be obtained for port %d.", (int)port);
		return ESP_ERR_TIMEOUT;
	}

    if (result != ESP_OK) {
    	ESP_LOGW(TAG, "Error: %d", result);
    }

	ESP_LOG_BUFFER_HEX_LEVEL(TAG, buffer, size, ESP_LOG_VERBOSE);

    return result;
}

esp_err_t I2C_FN(_close)(i2c_port_t port) {
	I2C_PORT_CHECK(port, ESP_FAIL);
    vSemaphoreDelete(I2C_FN(_mutex)[port]);
    I2C_FN(_mutex)[port] = NULL;
    ESP_LOGI(TAG, "Closing I2C master at port %d", port);
    return i2c_driver_delete(port);
}

esp_err_t I2C_FN(_lock)(i2c_port_t port) {
	I2C_PORT_CHECK(port, ESP_FAIL);
	ESP_LOGV(TAG, "Mutex lock set for %d.", (int)port);

	TickType_t timeout;
	#if defined (I2C_ZERO)
		if (port == I2C_NUM_0) {
			timeout = (CONFIG_I2C_MANAGER_0_LOCK_TIMEOUT) / portTICK_RATE_MS;
		}
	#endif
	#if defined (I2C_ONE)
		if (port == I2C_NUM_1) {
			timeout = (CONFIG_I2C_MANAGER_1_LOCK_TIMEOUT) / portTICK_RATE_MS;
		}
	#endif

	if (xSemaphoreTake(I2C_FN(_mutex)[port], timeout) == pdTRUE) {
		return ESP_OK;
	} else {
		ESP_LOGE(TAG, "Removing stale mutex lock from port %d.", (int)port);
		I2C_FN(_force_unlock)(port);
		return (xSemaphoreTake(I2C_FN(_mutex)[port], timeout) == pdTRUE ? ESP_OK : ESP_FAIL);
	}
}

esp_err_t I2C_FN(_unlock)(i2c_port_t port) {
	I2C_PORT_CHECK(port, ESP_FAIL);
	ESP_LOGV(TAG, "Mutex lock removed for %d.", (int)port);
	return (xSemaphoreGive(I2C_FN(_mutex)[port]) == pdTRUE) ? ESP_OK : ESP_FAIL;
}

esp_err_t I2C_FN(_force_unlock)(i2c_port_t port) {
	I2C_PORT_CHECK(port, ESP_FAIL);
	if (I2C_FN(_mutex)[port]) {
		vSemaphoreDelete(I2C_FN(_mutex)[port]);
	}
	I2C_FN(_mutex)[port] = xSemaphoreCreateMutex();
	return ESP_OK;
}



#ifdef I2C_OEM

    void I2C_FN(_locking)(void* leader) {
        if (leader) {
            ESP_LOGI(TAG, "Now following I2C Manager for locking");
            I2C_FN(_mutex) = (SemaphoreHandle_t*)leader;
		}
    }

#else

    void* i2c_manager_locking() {
        return (void*)i2c_manager_mutex;
    }

    int32_t i2c_hal_read(void *handle, uint8_t address, uint8_t reg, uint8_t *buffer, uint16_t size) {
        return i2c_manager_read(*(i2c_port_t*)handle, address, reg, buffer, size);
    }

    int32_t i2c_hal_write(void *handle, uint8_t address, uint8_t reg, const uint8_t *buffer, uint16_t size) {
        return i2c_manager_write(*(i2c_port_t*)handle, address, reg, buffer, size);
    }

	static i2c_port_t port_zero = (i2c_port_t)0;
	static i2c_port_t port_one = (i2c_port_t)1;

    static i2c_hal_t _i2c_hal[2] = {
        {&i2c_hal_read, &i2c_hal_write, &port_zero},
        {&i2c_hal_read, &i2c_hal_write, &port_one}
    };

    void* i2c_hal(i2c_port_t port) {
		I2C_PORT_CHECK(port, NULL);
        return (void*)&_i2c_hal[port];
    }

#endif
