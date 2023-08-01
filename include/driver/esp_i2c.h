#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Only here to get the I2C_NUM_0 and I2C_NUM_1 defines.
#include <driver/i2c.h>


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
