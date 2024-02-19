/*
 * alias.h
 *
 *  Created on: Feb 16, 2024
 *      Author: papai
 */

#ifndef ALIAS_H_
#define ALIAS_H_

#include "main.h"
#include "spi.h"

extern SPI_HandleTypeDef hspi1;

#define A121_SPI_SS_GPIO_Port	(SPI_SS_GPIO_Port)
#define A121_SPI_SS_Pin			(SPI_SS_Pin)
#define SEN_EN1_GPIO_Port		(ENABLE_GPIO_Port)
#define SEN_EN1_Pin				(ENABLE_Pin)
#define	SEN_INT1_GPIO_Port		(INT_GPIO_Port)
#define SEN_INT1_Pin			(INT_Pin)
#define A121_SPI_HANDLE			(hspi1)

#endif /* A121_PINS_ALIAS_H_ */
