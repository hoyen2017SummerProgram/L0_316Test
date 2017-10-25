#include "hwcfg.h"


/** @addtogroup WDL_HW_LOW_LEVEL
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

GPIO_TypeDef* GPIO_PORT[LEDn] = {LED1_GPIO_Port, LED2_GPIO_Port, LED3_GPIO_Port, LED4_GPIO_Port,
                                 LED5_GPIO_Port, LED6_GPIO_Port, LED7_GPIO_Port, LED8_GPIO_Port,
                                 LED9_GPIO_Port, LED0_GPIO_Port, LEDC_GPIO_Port, LEDS_GPIO_Port};

const uint16_t GPIO_PIN[LEDn] = {LED1_Pin, LED2_Pin, LED3_Pin, LED4_Pin,
                                 LED5_Pin, LED6_Pin, LED7_Pin, LED8_Pin,
                                 LED9_Pin, LED0_Pin, LEDC_Pin, LEDS_Pin};

void LED_On(Led_TypeDef Led)
{
  HAL_GPIO_WritePin(GPIO_PORT[Led], GPIO_PIN[Led], GPIO_PIN_SET);
}


void LED_Off(Led_TypeDef Led)
{
  HAL_GPIO_WritePin(GPIO_PORT[Led], GPIO_PIN[Led], GPIO_PIN_RESET);
}


void LED_Toggle(Led_TypeDef Led)
{
  HAL_GPIO_TogglePin(GPIO_PORT[Led], GPIO_PIN[Led]);
}

void BZ_On(void)
{
  HAL_GPIO_WritePin(BZ_GPIO_Port, BZ_Pin, GPIO_PIN_SET);
}


void BZ_Off(void)
{
  HAL_GPIO_WritePin(BZ_GPIO_Port, BZ_Pin, GPIO_PIN_RESET);
}
