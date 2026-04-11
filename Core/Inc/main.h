/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define sharp_Pin GPIO_PIN_0
#define sharp_GPIO_Port GPIOA
#define IR_linea1_Pin GPIO_PIN_1
#define IR_linea1_GPIO_Port GPIOA
#define ESP8266_RX_Pin GPIO_PIN_2
#define ESP8266_RX_GPIO_Port GPIOA
#define ESP8266_TX_Pin GPIO_PIN_3
#define ESP8266_TX_GPIO_Port GPIOA
#define IR_linea2_Pin GPIO_PIN_4
#define IR_linea2_GPIO_Port GPIOA
#define sensor_corriente_Pin GPIO_PIN_5
#define sensor_corriente_GPIO_Port GPIOA
#define voltaje_bateria_Pin GPIO_PIN_6
#define voltaje_bateria_GPIO_Port GPIOA
#define OLED_SCL_Pin GPIO_PIN_10
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_11
#define OLED_SDA_GPIO_Port GPIOB
#define TRIG_Pin GPIO_PIN_12
#define TRIG_GPIO_Port GPIOB
#define ECHO_Pin GPIO_PIN_13
#define ECHO_GPIO_Port GPIOB
#define Boton_Pin GPIO_PIN_14
#define Boton_GPIO_Port GPIOB
#define motor_izq1_Pin GPIO_PIN_8
#define motor_izq1_GPIO_Port GPIOA
#define motor_izq2_Pin GPIO_PIN_9
#define motor_izq2_GPIO_Port GPIOA
#define motor_der1_Pin GPIO_PIN_10
#define motor_der1_GPIO_Port GPIOA
#define motor_der2_Pin GPIO_PIN_11
#define motor_der2_GPIO_Port GPIOA
#define RGB_rojo_Pin GPIO_PIN_6
#define RGB_rojo_GPIO_Port GPIOB
#define RGB_verde_Pin GPIO_PIN_7
#define RGB_verde_GPIO_Port GPIOB
#define RGB_azul_Pin GPIO_PIN_8
#define RGB_azul_GPIO_Port GPIOB
#define Buzzer_Pin GPIO_PIN_9
#define Buzzer_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
