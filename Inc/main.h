/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define W42_Pin GPIO_PIN_2
#define W42_GPIO_Port GPIOE
#define W43_Pin GPIO_PIN_3
#define W43_GPIO_Port GPIOE
#define W44_Pin GPIO_PIN_4
#define W44_GPIO_Port GPIOE
#define W45_Pin GPIO_PIN_5
#define W45_GPIO_Port GPIOE
#define W46_Pin GPIO_PIN_6
#define W46_GPIO_Port GPIOE
#define W22_Pin GPIO_PIN_13
#define W22_GPIO_Port GPIOC
#define W23_Pin GPIO_PIN_14
#define W23_GPIO_Port GPIOC
#define W24_Pin GPIO_PIN_15
#define W24_GPIO_Port GPIOC
#define ADC_AIRP_Pin GPIO_PIN_0
#define ADC_AIRP_GPIO_Port GPIOC
#define ADC_TPS_Pin GPIO_PIN_1
#define ADC_TPS_GPIO_Port GPIOC
#define ADC_LAMBDA_Pin GPIO_PIN_2
#define ADC_LAMBDA_GPIO_Port GPIOC
#define ADC_AUX_Pin GPIO_PIN_3
#define ADC_AUX_GPIO_Port GPIOC
#define ADC_H2O_Pin GPIO_PIN_0
#define ADC_H2O_GPIO_Port GPIOA
#define ADC_OILT_Pin GPIO_PIN_1
#define ADC_OILT_GPIO_Port GPIOA
#define ADC_AIRT_Pin GPIO_PIN_2
#define ADC_AIRT_GPIO_Port GPIOA
#define ADC_VBATT_Pin GPIO_PIN_3
#define ADC_VBATT_GPIO_Port GPIOA
#define W1_Pin GPIO_PIN_4
#define W1_GPIO_Port GPIOA
#define W2_Pin GPIO_PIN_5
#define W2_GPIO_Port GPIOA
#define W3_Pin GPIO_PIN_6
#define W3_GPIO_Port GPIOA
#define W8_Pin GPIO_PIN_7
#define W8_GPIO_Port GPIOA
#define W18_Pin GPIO_PIN_4
#define W18_GPIO_Port GPIOC
#define W19_Pin GPIO_PIN_5
#define W19_GPIO_Port GPIOC
#define W9_Pin GPIO_PIN_0
#define W9_GPIO_Port GPIOB
#define W10_Pin GPIO_PIN_1
#define W10_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define CUTOFF_IN_Pin GPIO_PIN_7
#define CUTOFF_IN_GPIO_Port GPIOE
#define TC_IN_Pin GPIO_PIN_8
#define TC_IN_GPIO_Port GPIOE
#define MAP_IN_Pin GPIO_PIN_9
#define MAP_IN_GPIO_Port GPIOE
#define AUX_LOWSIDE_Pin GPIO_PIN_10
#define AUX_LOWSIDE_GPIO_Port GPIOE
#define LED_ENGINE_ON_Pin GPIO_PIN_11
#define LED_ENGINE_ON_GPIO_Port GPIOE
#define LED_OTEMP_ON_Pin GPIO_PIN_12
#define LED_OTEMP_ON_GPIO_Port GPIOE
#define SVC_AUX_ON_Pin GPIO_PIN_13
#define SVC_AUX_ON_GPIO_Port GPIOE
#define FAN_ON_Pin GPIO_PIN_14
#define FAN_ON_GPIO_Port GPIOE
#define PUMP_ON_Pin GPIO_PIN_15
#define PUMP_ON_GPIO_Port GPIOE
#define MAIN_TTL_TX_Pin GPIO_PIN_10
#define MAIN_TTL_TX_GPIO_Port GPIOB
#define MAIN_TTL_RX_Pin GPIO_PIN_11
#define MAIN_TTL_RX_GPIO_Port GPIOB
#define SF_SPI_SS_Pin GPIO_PIN_12
#define SF_SPI_SS_GPIO_Port GPIOB
#define SF_SPI_SCK_Pin GPIO_PIN_13
#define SF_SPI_SCK_GPIO_Port GPIOB
#define SF_SPI_MISO_Pin GPIO_PIN_14
#define SF_SPI_MISO_GPIO_Port GPIOB
#define SF_SPI_MOSI_Pin GPIO_PIN_15
#define SF_SPI_MOSI_GPIO_Port GPIOB
#define W33_Pin GPIO_PIN_8
#define W33_GPIO_Port GPIOD
#define W34_Pin GPIO_PIN_9
#define W34_GPIO_Port GPIOD
#define W35_Pin GPIO_PIN_10
#define W35_GPIO_Port GPIOD
#define W36_Pin GPIO_PIN_11
#define W36_GPIO_Port GPIOD
#define W37_Pin GPIO_PIN_12
#define W37_GPIO_Port GPIOD
#define W38_Pin GPIO_PIN_13
#define W38_GPIO_Port GPIOD
#define W39_Pin GPIO_PIN_14
#define W39_GPIO_Port GPIOD
#define PWR_OUT_ENA_Pin GPIO_PIN_15
#define PWR_OUT_ENA_GPIO_Port GPIOD
#define TELEMETRY_TTL_TX_Pin GPIO_PIN_6
#define TELEMETRY_TTL_TX_GPIO_Port GPIOC
#define TELEMETRY_TTL_RX_Pin GPIO_PIN_7
#define TELEMETRY_TTL_RX_GPIO_Port GPIOC
#define W20_Pin GPIO_PIN_8
#define W20_GPIO_Port GPIOC
#define W21_Pin GPIO_PIN_9
#define W21_GPIO_Port GPIOC
#define HBEAT_Pin GPIO_PIN_8
#define HBEAT_GPIO_Port GPIOA
#define FPGA_TTL_TX_Pin GPIO_PIN_9
#define FPGA_TTL_TX_GPIO_Port GPIOA
#define FPGA_TTL_RX_Pin GPIO_PIN_10
#define FPGA_TTL_RX_GPIO_Port GPIOA
#define FPGA_AUX_ADC_EXTI1_Pin GPIO_PIN_11
#define FPGA_AUX_ADC_EXTI1_GPIO_Port GPIOA
#define FPGA_AUX_ADC_EXTI2_Pin GPIO_PIN_12
#define FPGA_AUX_ADC_EXTI2_GPIO_Port GPIOA
#define SYS_MEM_SS_Pin GPIO_PIN_15
#define SYS_MEM_SS_GPIO_Port GPIOA
#define SYS_MEM_SCK_Pin GPIO_PIN_10
#define SYS_MEM_SCK_GPIO_Port GPIOC
#define SYS_MEM_MISO_Pin GPIO_PIN_11
#define SYS_MEM_MISO_GPIO_Port GPIOC
#define SYS_MEM_MOSI_Pin GPIO_PIN_12
#define SYS_MEM_MOSI_GPIO_Port GPIOC
#define W25_Pin GPIO_PIN_0
#define W25_GPIO_Port GPIOD
#define W26_Pin GPIO_PIN_1
#define W26_GPIO_Port GPIOD
#define W27_Pin GPIO_PIN_2
#define W27_GPIO_Port GPIOD
#define W28_Pin GPIO_PIN_3
#define W28_GPIO_Port GPIOD
#define W29_Pin GPIO_PIN_4
#define W29_GPIO_Port GPIOD
#define W30_Pin GPIO_PIN_5
#define W30_GPIO_Port GPIOD
#define W31_Pin GPIO_PIN_6
#define W31_GPIO_Port GPIOD
#define W32_Pin GPIO_PIN_7
#define W32_GPIO_Port GPIOD
#define W11_Pin GPIO_PIN_3
#define W11_GPIO_Port GPIOB
#define W12_Pin GPIO_PIN_4
#define W12_GPIO_Port GPIOB
#define W13_Pin GPIO_PIN_5
#define W13_GPIO_Port GPIOB
#define W14_Pin GPIO_PIN_6
#define W14_GPIO_Port GPIOB
#define W15_Pin GPIO_PIN_7
#define W15_GPIO_Port GPIOB
#define W16_Pin GPIO_PIN_8
#define W16_GPIO_Port GPIOB
#define W17_Pin GPIO_PIN_9
#define W17_GPIO_Port GPIOB
#define W40_Pin GPIO_PIN_0
#define W40_GPIO_Port GPIOE
#define W41_Pin GPIO_PIN_1
#define W41_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
