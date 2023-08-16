#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Only here to get the I2C_NUM_0 and I2C_NUM_1 defines.
#include <driver/i2c.h>

#define ESP_I2C_TAG     "ESP_I2C"

#ifdef CONFIG_ESP_I2C_PORT_0_ENABLED
    #ifdef CONFIG_ESP_I2C_PORT_0_SDA
        #define ESP_I2C_PORT_0_SDA CONFIG_ESP_I2C_PORT_0_SDA
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_0_SCL
        #define ESP_I2C_PORT_0_SCL CONFIG_ESP_I2C_PORT_0_SCL
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_0_FREQ_HZ
        #define ESP_I2C_PORT_0_FREQ_HZ CONFIG_ESP_I2C_PORT_0_FREQ_HZ
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_0_TIMEOUT
        #define ESP_I2C_PORT_0_TIMEOUT CONFIG_ESP_I2C_PORT_0_TIMEOUT
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_0_LOCK_TIMEOUT
        #define ESP_I2C_PORT_0_LOCK_TIMEOUT CONFIG_ESP_I2C_PORT_0_LOCK_TIMEOUT
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_0_PULLUPS
        #define ESP_I2C_PORT_0_PULLUPS CONFIG_ESP_I2C_PORT_0_PULLUPS
    #endif
#endif

#ifdef CONFIG_ESP_I2C_PORT_1_ENABLED
    #ifdef CONFIG_ESP_I2C_PORT_1_SDA
        #define ESP_I2C_PORT_1_SDA CONFIG_ESP_I2C_PORT_1_SDA
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_1_SCL
        #define ESP_I2C_PORT_1_SCL CONFIG_ESP_I2C_PORT_1_SCL
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_1_FREQ_HZ
        #define ESP_I2C_PORT_1_FREQ_HZ CONFIG_ESP_I2C_PORT_1_FREQ_HZ
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_1_TIMEOUT
        #define ESP_I2C_PORT_1_TIMEOUT CONFIG_ESP_I2C_PORT_1_TIMEOUT
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_1_LOCK_TIMEOUT
        #define ESP_I2C_PORT_1_LOCK_TIMEOUT CONFIG_ESP_I2C_PORT_1_LOCK_TIMEOUT
    #endif
    #ifdef CONFIG_ESP_I2C_PORT_1_PULLUPS
        #define ESP_I2C_PORT_1_PULLUPS CONFIG_ESP_I2C_PORT_1_PULLUPS
    #endif
#endif

#define I2C_ADDR_10 ( 1 << 15 )
#define I2C_REG_16  ( 1 << 31 )
#define I2C_NO_REG  ( 1 << 30 )

esp_err_t esp_i2c_init(i2c_port_t port);
esp_err_t esp_i2c_read(i2c_port_t port, uint16_t addr, uint32_t reg, uint8_t *buffer, uint16_t size);
esp_err_t esp_i2c_write(i2c_port_t port, uint16_t addr, uint32_t reg, const uint8_t *buffer, uint16_t size);
esp_err_t esp_i2c_close(i2c_port_t port);
esp_err_t esp_i2c_lock(i2c_port_t port);
esp_err_t esp_i2c_unlock(i2c_port_t port);
esp_err_t esp_i2c_force_unlock(i2c_port_t port);

#ifdef __cplusplus
}
#endif
