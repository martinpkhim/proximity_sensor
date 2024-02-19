/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

#include "hci_tl_interface.h"
#include "custom.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENABLE_Pin GPIO_PIN_13
#define ENABLE_GPIO_Port GPIOC
#define SPI2_SS_Pin GPIO_PIN_0
#define SPI2_SS_GPIO_Port GPIOC
#define SPI_SS_Pin GPIO_PIN_0
#define SPI_SS_GPIO_Port GPIOA
#define SPI_CLK_Pin GPIO_PIN_1
#define SPI_CLK_GPIO_Port GPIOA
#define INT_Pin GPIO_PIN_3
#define INT_GPIO_Port GPIOA
#define INT_EXTI_IRQn EXTI3_IRQn
#define SPI_MISO_Pin GPIO_PIN_6
#define SPI_MISO_GPIO_Port GPIOA
#define SPI_MOSI_Pin GPIO_PIN_7
#define SPI_MOSI_GPIO_Port GPIOA
#define SPI3_SS_Pin GPIO_PIN_2
#define SPI3_SS_GPIO_Port GPIOB
#define SPI2_CLK_Pin GPIO_PIN_10
#define SPI2_CLK_GPIO_Port GPIOB
#define SPI3_CLK_Pin GPIO_PIN_10
#define SPI3_CLK_GPIO_Port GPIOC
#define LEDR_Pin GPIO_PIN_2
#define LEDR_GPIO_Port GPIOD
#define IRQ_Pin GPIO_PIN_8
#define IRQ_GPIO_Port GPIOB
#define IRQ_EXTI_IRQn EXTI9_5_IRQn
#define BL_NRESET_Pin GPIO_PIN_9
#define BL_NRESET_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
