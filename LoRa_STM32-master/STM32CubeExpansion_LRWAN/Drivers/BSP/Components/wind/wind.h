

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __WIND_H__
#define __WIND_H__

#include "stm32l0xx_hal.h"

void GPIO_WIND_INPUT_Init(void);
void GPIO_WIND_OUTPUT_Init(void);
void GPIO_WIND_INPUT_DeInit(void);
void GPIO_WIND_OUTPUT_DeInit(void);
void TIM6_Init(void);
void testing_wind(void);
uint16_t WIND_test(void);
void wind_test_temp(uint16_t winddata[]);
void ADC_Dxpd(uint16_t adc_nums[]);
uint16_t ADC_Average(uint16_t adc_nums[]);

#ifdef __cplusplus
 extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
/* External variables --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
/**
 * @brief  
 *
 * @note
 * @retval None
 */

#ifdef __cplusplus
}
#endif

#endif
