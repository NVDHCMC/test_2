/**
  ******************************************************************************
  * @file    initsys.c
  * @author  Azure
  * @version V0.2.0
  * @date    8th-October-2017
  * @brief 	 Contain main kernel initialization, OS startup sequence
  * 		 and peripheral interrupt request handlers and callbacks
  *
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include <initsys.h>

extern void _Error_Handler(void);

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
initHandle_struct 				initHandles;

/* Private functions ---------------------------------------------------------*/


/**
  * @brief 	RCC: Initialized USART2 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
static void RCC_INIT(void)
{
	ErrorStatus sHSEStartUpStatus;

	sHSEStartUpStatus = RCC_WaitForHSEStartUp();

	if (sHSEStartUpStatus == SUCCESS) {
		FLASH_PrefetchBufferCmd(FLASH_PrefetchBuffer_Enable);

		FLASH_SetLatency(FLASH_Latency_2);

		RCC_HCLKConfig(RCC_SYSCLK_Div1);

		RCC_PCLK2Config(RCC_HCLK_Div1);

		RCC_PCLK1Config(RCC_HCLK_Div2);

		RCC_PLLConfig(RCC_PLLSource_HSE_Div1, RCC_PLLMul_9);

		RCC_PLLCmd(ENABLE);

		while (RCC_GetFlagStatus(RCC_FLAG_PLLRDY) != SET) {
		}

		RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);

		while (RCC_GetSYSCLKSource() != 0x08) {
		}
	}

	if (SysTick_Config(SystemCoreClock / 1000))
	{
		/* Capture error */
		while (1)
		{
		}
	}
}

/**
  * @brief 	Basic GPIO Init: Initialized LEDs indicator for error handling function
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
static void BASIC_GPIO_INIT(void)
{
	/* Define new GPIO handle */
	GPIO_InitTypeDef GPIO_struct;

	GPIO_struct.GPIO_Pin 		= GPIO_Pin_0;
	GPIO_struct.GPIO_Mode 		= GPIO_Mode_Out_PP;
	GPIO_struct.GPIO_Speed 		= GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_struct);
}

/**
  * @brief  Initializes the Global MSP.
  * @note   This function is called from HAL_Init() function to perform system
  *         level initialization (GPIOs, clock, DMA, interrupt).
  * @retval None
  */
void HAL_MspInit(void)
{
	RCC_INIT();
	/* Basic GPIO configured and enabled */
	BASIC_GPIO_INIT();
}

/* Dummy extended ppp init functions */
__weak void EX0_PPP_INIT(void) {}
__weak void EX1_PPP_INIT(void) {}
__weak void EX2_PPP_INIT(void) {}
__weak void EX3_PPP_INIT(void) {}
__weak void EX4_PPP_INIT(void) {}
__weak void EX6_PPP_INIT(void) {}
__weak void EX5_PPP_INIT(void) {}
__weak void EX7_PPP_INIT(void) {}

/* Exported variable ---------------------------------------------------------*/
initHandle_struct initHandles = {
	ADC_INIT,
	TIM1_INIT,
	TIM2_INIT,
	TIM3_INIT,
	TIM4_INIT,
	TIM5_INIT,
	TIM8_INIT,
	TIM10_INIT,
	TIM14_INIT,
	USART1_INIT,
	USART2_INIT,
	I2C1_INIT,
	I2C2_INIT,
	I2C3_INIT,
	SPI1_INIT,
	SPI2_INIT,
	SPI3_INIT,
	EX0_PPP_INIT,
	EX1_PPP_INIT,
	EX2_PPP_INIT,
	EX3_PPP_INIT,
	EX4_PPP_INIT,
	EX5_PPP_INIT,
	EX6_PPP_INIT,
	EX7_PPP_INIT,
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0}
};

/* Exported functions --------------------------------------------------------*/
/**
  * @brief 	ADC_INIT: Initialized ADC peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void ADC_INIT(void)
{

}

/**
  * @brief 	TIM1_INIT: Initialize TIM1 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM1_INIT(void)
{
}

/**
  * @brief 	TIM2_INIT: Initialize TIM2 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM2_INIT(void)
{
}

/**
  * @brief 	TIM3_INIT: Initialize TIM3 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM3_INIT(void)
{
}

/**
  * @brief 	TIM4_INIT: Initialized TIM4 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM4_INIT(void)
{
}

/**
  * @brief 	TIM5_INIT: Initialized TIM5 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM5_INIT(void)
{
}

/**
  * @brief 	TIM5_INIT: Initialized TIM5 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM8_INIT(void)
{
}

/**
  * @brief 	TIM10_INIT: Initialized TIM10 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM10_INIT(void)
{

}

/**
  * @brief 	TIM14_INIT: Initialized TIM14 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void TIM14_INIT(void)
{

}


/**
  * @brief 	USART2_INIT: Initialized USART1 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void USART1_INIT(void)
{
}

/**
  * @brief 	USART2_INIT: Initialized USART2 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void USART2_INIT(void)
{
}

/**
  * @brief 	I2C1_INIT: Initialized I2C1 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void I2C1_INIT(void)
{

}

/**
  * @brief 	I2C2_INIT: Initialized I2C2 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void I2C2_INIT(void)
{

}

/**
  * @brief 	I2C3_INIT: Initialized I2C3 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void I2C3_INIT(void)
{

}

/**
  * @brief 	SPI1_INIT: Initialized SPI1 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void SPI1_INIT(void)
{

}

/**
  * @brief 	USART2_INIT: Initialized USART1 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void SPI2_INIT(void)
{

}

/**
  * @brief 	SPI3_INIT: Initialized SPI3 peripheral
  * @param 	none
  * @retval none
  *
  * @notice unusable if not first initialized main data bus clock
  */
__weak void SPI3_INIT(void)
{

}

/** @defgroup initperip_Exported Functions
  * @{
  */
sInitStatus LIME_INIT_SYSTEM(void)
{
	sInitStatus status = INIT_OK;
	initHandles.ADC_INIT();
	initHandles.TIM1_INIT();
	initHandles.TIM2_INIT();
	initHandles.TIM3_INIT();
	initHandles.TIM4_INIT();
	initHandles.TIM5_INIT();
	initHandles.TIM8_INIT();
	initHandles.TIM10_INIT();
	initHandles.TIM14_INIT();
	initHandles.USART1_INIT();
	initHandles.USART2_INIT();
	initHandles.I2C1_INIT();
	initHandles.I2C2_INIT();
	initHandles.I2C3_INIT();
	initHandles.SPI1_INIT();
	initHandles.SPI2_INIT();
	initHandles.SPI3_INIT();
	initHandles.EX0_PPP_INIT();
	initHandles.EX1_PPP_INIT();
	initHandles.EX2_PPP_INIT();
	initHandles.EX3_PPP_INIT();
	initHandles.EX4_PPP_INIT();
	initHandles.EX5_PPP_INIT();
	initHandles.EX6_PPP_INIT();
	initHandles.EX7_PPP_INIT();

	return status;
}
/**
  * @}
  */
