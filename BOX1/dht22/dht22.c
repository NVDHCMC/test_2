/*
 * dht22.c
 *
 *  Created on: Nov 6, 2018
 *      Author: yoxx
 */

#include "dht22.h"

void BOX1_DHT22_PWR_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(DHT22_PWR_01_CLK, ENABLE);
	RCC_APB2PeriphClockCmd(DHT22_PWR_02_CLK, ENABLE);
	GPIO_InitStructure.GPIO_Pin = DHT22_PWR_01_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(DHT22_PWR_01_PORT, &GPIO_InitStructure);

	GPIO_InitStructure.GPIO_Pin = DHT22_PWR_02_PIN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(DHT22_PWR_02_PORT, &GPIO_InitStructure);
//	DHT22_01_PWR_OFF();
//	DHT22_02_PWR_OFF();
}
