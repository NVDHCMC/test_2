/**
  ******************************************************************************
  * @file    initsys.h
  * @author  Azure
  * @version V0.2.0
  * @date    8th-October-2017
  * @brief 	 Main init handle structure.
  *
  *
  ******************************************************************************
*/

#ifndef INITSYS_H_
#define INITSYS_H_

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/** @defgroup 	General configurations
  * @{
  */
#define __USE_FREERTOS__
/**
  * @}
  */

/** @defgroup 	PPP_Interrupt_Priority
  * @{
  */
#define USART1_NVIC_PRIORITY 			((uint32_t) 7)
#define USART2_NVIC_PRIORITY 			((uint32_t) 7)
#define SPI2_NVIC_PRIORITY 				((uint32_t) 6)
#define TIM2_NVIC_PRIORITY 				((uint32_t) 7)
#define TIM3_NVIC_PRIORITY 				((uint32_t) 7)
#define TIM4_NVIC_PRIORITY 				((uint32_t) 6)
#define TIM5_NVIC_PRIORITY 				((uint32_t) 7)
/**
  * @}
  */

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/**/
typedef enum
{
	INIT_OK = 0,
	INIT_ERROR
} sInitStatus;

/** @defgroup 	inithandle exported types
  * @{
  */
typedef struct
{
	void						(*ADC_INIT)(void);
	void 						(*TIM1_INIT)(void);
	void		 				(*TIM2_INIT)(void);
	void		 				(*TIM3_INIT)(void);
	void 						(*TIM4_INIT)(void);
	void						(*TIM5_INIT)(void);
	void						(*TIM8_INIT)(void);
	void 						(*TIM10_INIT)(void);
	void 						(*TIM14_INIT)(void);
	void		 				(*USART1_INIT)(void);
	void		 				(*USART2_INIT)(void);
	void		 				(*I2C1_INIT)(void);
	void		 				(*I2C2_INIT)(void);
	void		 				(*I2C3_INIT)(void);
	void 						(*SPI1_INIT)(void);
	void 						(*SPI2_INIT)(void);
	void 						(*SPI3_INIT)(void);
	void 						(*EX0_PPP_INIT)(void);
	void 						(*EX1_PPP_INIT)(void);
	void 						(*EX2_PPP_INIT)(void);
	void 						(*EX3_PPP_INIT)(void);
	void 						(*EX4_PPP_INIT)(void);
	void 						(*EX5_PPP_INIT)(void);
	void 						(*EX6_PPP_INIT)(void);
	void 						(*EX7_PPP_INIT)(void);
	ADC_InitTypeDef 			ADC1_Handle;
	TIM_TimeBaseInitTypeDef 	TIM2_Handle; 			/* TIMer peripherals */
	TIM_TimeBaseInitTypeDef 	TIM3_Handle;
	TIM_TimeBaseInitTypeDef 	TIM4_Handle;
	TIM_TimeBaseInitTypeDef 	TIM5_Handle;
	TIM_TimeBaseInitTypeDef 	TIM8_Handle;
	TIM_TimeBaseInitTypeDef 	TIM9_Handle;
	TIM_TimeBaseInitTypeDef 	TIM10_Handle;
	TIM_TimeBaseInitTypeDef 	TIM14_Handle;
	USART_InitTypeDef			USART1_Handle;
	USART_InitTypeDef			USART2_Handle; 			/* USART peripherals */
	I2C_InitTypeDef 			I2C1_Handle;
	I2C_InitTypeDef 			I2C2_Handle;
	I2C_InitTypeDef 			I2C3_Handle;
	SPI_InitTypeDef 			SPI1_Handle;
	SPI_InitTypeDef 			SPI2_Handle;
	SPI_InitTypeDef 			SPI3_Handle;
} initHandle_struct;
/**
  * @}
  */

/* Exported variables ---------------------------------------------------------*/
extern initHandle_struct 		initHandles;

/* Exported function prototypes -----------------------------------------------*/
void 					ADC_INIT(void);
void 					TIM1_INIT(void);
void 					TIM2_INIT(void);
void 					TIM3_INIT(void);
void					TIM4_INIT(void);
void 					TIM5_INIT(void);
void					TIM8_INIT(void);
void					TIM10_INIT(void);
void					TIM14_INIT(void);
void 					USART1_INIT(void);
void 					USART2_INIT(void);
void 					I2C1_INIT(void);
void 					I2C2_INIT(void);
void 					I2C3_INIT(void);
void 					SPI1_INIT(void);
void 					SPI2_INIT(void);
void 					SPI3_INIT(void);
void 					EX0_PPP_INIT(void);
void 					EX1_PPP_INIT(void);
void 					EX2_PPP_INIT(void);
void 					EX3_PPP_INIT(void);
void 					EX4_PPP_INIT(void);
void 					EX5_PPP_INIT(void);
void 					EX6_PPP_INIT(void);
void 					EX7_PPP_INIT(void);
extern void _Error_Handler(void);

#endif /* INITSYS_H_ */
