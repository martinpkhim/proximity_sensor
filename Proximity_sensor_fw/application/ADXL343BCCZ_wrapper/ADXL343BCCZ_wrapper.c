/*
 * ADXL343BCCZ_wrapper.c
 *
 *  Created on: Feb 19, 2024
 *      Author: papai
 */


#include "ADXL343BCCZ_wrapper.h"

/**
 * @brief
 *
 * @param wdata
 * @param size
 * @return
 */
bool spi_write(uint8_t * wdata, uint32_t size)
{
	HAL_StatusTypeDef result = HAL_ERROR;

	result = HAL_SPI_Transmit(&hspi3, wdata, size, HAL_MAX_DELAY);

	return (result == HAL_ERROR) ? false : true;
}

/**
 * @brief
 *
 * @param wdata
 * @param rdata
 * @param wsize
 * @param rsize
 * @return
 */
bool spi_read(uint8_t * wdata, uint8_t * rdata, uint32_t wsize, uint32_t rsize)
{
	HAL_StatusTypeDef result = HAL_ERROR;

	result = HAL_SPI_Transmit(&hspi3, wdata, wsize, HAL_MAX_DELAY);
	result = HAL_SPI_Receive(&hspi3, rdata, rsize, HAL_MAX_DELAY);

	return (result == HAL_ERROR) ? false : true;
}

/**
 * @brief
 *
 * @param state
 * @return
 */
bool set_cs(bool state)
{
	HAL_StatusTypeDef result = HAL_ERROR;
	GPIO_PinState pin_state = (state) ? GPIO_PIN_SET : GPIO_PIN_RESET;

	HAL_GPIO_WritePin(SPI3_SS_GPIO_Port, SPI3_SS_Pin, pin_state);

	result = HAL_OK;

	return (result == HAL_ERROR) ? false : true;
}

/**
 * @brief
 *
 * @param delay
 */
void delay_ms(uint32_t delay)
{
	HAL_Delay(delay);
}
