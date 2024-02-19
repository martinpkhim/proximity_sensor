/*
 * ADXL343BCCZ_wrapper.h
 *
 *  Created on: Feb 19, 2024
 *      Author: papai
 */

#ifndef ADXL343BCCZ_WRAPPER_ADXL343BCCZ_WRAPPER_H_
#define ADXL343BCCZ_WRAPPER_ADXL343BCCZ_WRAPPER_H_

#include "spi.h"
#include "gpio.h"
#include <stdint.h>
#include <stdbool.h>

bool spi_write(uint8_t * wdata, uint32_t size);
bool spi_read(uint8_t * wdata, uint8_t * rdata, uint32_t wsize, uint32_t rsize);
bool set_cs(bool state);
void delay_ms(uint32_t delay);

#endif /* ADXL343BCCZ_WRAPPER_ADXL343BCCZ_WRAPPER_H_ */
