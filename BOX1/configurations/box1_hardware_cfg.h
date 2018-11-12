/*
 * box1_hardware_cfg.h
 *
 *  Created on: Nov 6, 2018
 *      Author: yoxx
 */

#ifndef CONFIGURATIONS_BOX1_HARDWARE_CFG_H_
#define CONFIGURATIONS_BOX1_HARDWARE_CFG_H_

/**********************************************************
 *  Define pin for dht22
 **********************************************************/

#define DHT22_01_PORT		GPIOB
#define DHT22_01_PIN		GPIO_Pin_9
#define DHT22_01_CLK		RCC_APB2Periph_GPIOB
#define DHT22_01_PortSource	GPIO_PortSourceGPIOB
#define DHT22_01_PinSource	GPIO_PinSource9

#define DHT22_02_PORT		GPIOC
#define DHT22_02_PIN		GPIO_Pin_12
#define DHT22_02_CLK		RCC_APB2Periph_GPIOC
#define DHT22_02_PortSource	GPIO_PortSourceGPIOC
#define DHT22_02_PinSource	GPIO_PinSource12

/*
 * Define Pin for power supply dht22
 * */
#define DHT22_PWR_01_PORT		GPIOA
#define DHT22_PWR_01_PIN		GPIO_Pin_8
#define DHT22_PWR_01_CLK		RCC_APB2Periph_GPIOA
#define DHT22_PWR_01_PortSource	GPIO_PortSourceGPIOA
#define DHT22_PWR_01_PinSource	GPIO_PinSource8

/*
 * Define Pin for power supply dht22
 * */
#define DHT22_PWR_02_PORT		GPIOB
#define DHT22_PWR_02_PIN		GPIO_Pin_8
#define DHT22_PWR_02_CLK		RCC_APB2Periph_GPIOB
#define DHT22_PWR_02_PortSource	GPIO_PortSourceGPIOB
#define DHT22_PWR_02_PinSource	GPIO_PinSource8



#endif /* CONFIGURATIONS_BOX1_HARDWARE_CFG_H_ */
