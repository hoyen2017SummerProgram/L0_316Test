/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HWCFG_H
#define __HWCFG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/** @addtogroup WDL_HW_LOW_LEVEL
  * @{
  */

/* Exported types ------------------------------------------------------------*/
typedef enum
{
  LED1 = 0,
  LED2 = 1,
  LED3 = 2,
  LED4 = 3,
  LED5 = 4,
  LED6 = 5,
  LED7 = 6,
  LED8 = 7,
  LED9 = 8,
  LED0 = 9,          // 0
  LEDC = 10,         // C
  LEDS = 11,         // S
  LEDALL = 12,
  BUZZER = 13          // BZ
} Led_TypeDef;

#define LEDn                             12

#define LED1_Pin GPIO_PIN_8
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_11
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_12
#define LED3_GPIO_Port GPIOA
#define LED4_Pin GPIO_PIN_3
#define LED4_GPIO_Port GPIOA
#define LED5_Pin GPIO_PIN_4
#define LED5_GPIO_Port GPIOA
#define LED6_Pin GPIO_PIN_5
#define LED6_GPIO_Port GPIOA
#define LED7_Pin GPIO_PIN_0
#define LED7_GPIO_Port GPIOB
#define LED8_Pin GPIO_PIN_7
#define LED8_GPIO_Port GPIOA
#define LED9_Pin GPIO_PIN_6
#define LED9_GPIO_Port GPIOA
#define LED0_Pin GPIO_PIN_15
#define LED0_GPIO_Port GPIOA
#define LEDC_Pin GPIO_PIN_3
#define LEDC_GPIO_Port GPIOB
#define LEDS_Pin GPIO_PIN_1
#define LEDS_GPIO_Port GPIOB
/** Buzzer */
#define BZ_Pin GPIO_PIN_4
#define BZ_GPIO_Port GPIOB

/* G SENSOR INT1 */
#define G_INT1_Pin GPIO_PIN_9
#define G_INT1_GPIO_Port GPIOB
#define G_INT1_EXTI_IRQn EXTI4_15_IRQn
/* G SENSOR INT2 */
#define G_INT2_Pin GPIO_PIN_6
#define G_INT2_GPIO_Port GPIOB
#define G_INT2_EXTI_IRQn EXTI4_15_IRQn

#define TP_MCLR_Pin GPIO_PIN_1
#define TP_MCLR_GPIO_Port GPIOA
#define TP_IRDY_Pin GPIO_PIN_2
#define TP_IRDY_GPIO_Port GPIOA


#define MCLR_PIN                         GPIO_Pin_4
#define MCLR_GPIO_PORT                   GPIOF
#define MCLR_GPIO_CLK                    RCC_AHBPeriph_GPIOF

#define MCLR_LOW()                       HAL_GPIO_WritePin(TP_MCLR_GPIO_Port, TP_MCLR_Pin, GPIO_PIN_RESET)
#define MCLR_HIGH()                      HAL_GPIO_WritePin(TP_MCLR_GPIO_Port, TP_MCLR_Pin, GPIO_PIN_SET)


#define NFC_OUT_Pin GPIO_PIN_2
#define NFC_OUT_GPIO_Port GPIOB
#define SPI2_NSS_Pin GPIO_PIN_12
#define SPI2_NSS_GPIO_Port GPIOB

#define DEBUG_TX_Pin GPIO_PIN_9
#define DEBUG_TX_GPIO_Port GPIOA
#define DEBUG_RX_Pin GPIO_PIN_10
#define DEBUG_RX_GPIO_Port GPIOA



#define MB_WKE_Pin GPIO_PIN_5
#define MB_WKE_GPIO_Port GPIOB
/**
  * @brief  Touch pad I2C Interface pins
  */
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB

/**
  * @}
  */


void LED_On(Led_TypeDef Led);
void LED_Off(Led_TypeDef Led);
void LED_Toggle(Led_TypeDef Led);
void BZ_On(void);
void BZ_Off(void);

/**
  * @}
  */

#endif

