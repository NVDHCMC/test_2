/*
 * init.c
 *
 *  Created on: Nov 3, 2018
 *      Author: yoxx
 */

#include "stm32f10x.h"
#include "mb.h"
#include "init.h"

void HardwareLayerInit(void) {

}

void ApplicationLayerInit(void) {
	// Init NVIC Priority Grouping
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
}

void ComponentsInit(void) {
	HardwareLayerInit();
	ApplicationLayerInit();
}
