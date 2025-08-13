 
//  * @brief   manages the sensors on the application
 
  /* Includes ------------------------------------------------------------------*/
#include "hw.h"
#include "wind.h"
#include "timeServer.h"
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Exported functions ---------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
//static uint16_t time_sum_ms=0;
//uint8_t time_sum_s=0;
TIM_HandleTypeDef htim6;
extern uint16_t power_time;

void GPIO_WIND_INPUT_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct={0};
	WIND_TRIG_CLK_ENABLE();
	
	GPIO_InitStruct.Pin = WIND_TRIG_PIN;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;

  HW_GPIO_Init( WIND_TRIG_PORT, WIND_TRIG_PIN, &GPIO_InitStruct );
}

void GPIO_WIND_INPUT_DeInit(void)
{
	GPIO_InitTypeDef GPIO_InitStruct={0};
	WIND_TRIG_CLK_ENABLE();

  GPIO_InitStruct.Pin = WIND_TRIG_PIN ;
	GPIO_InitStruct.Mode  = GPIO_MODE_ANALOG;
	GPIO_InitStruct.Pull  = GPIO_NOPULL;
  HAL_GPIO_Init(WIND_TRIG_PORT, &GPIO_InitStruct); 	
}

