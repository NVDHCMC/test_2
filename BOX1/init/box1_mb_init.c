/*
 * box1_mb_init.c
 *
 *  Created on: Nov 5, 2018
 *      Author: yoxx
 */

#include <init/box1_mb_init.h>

eMBErrorCode BOX1_modbus_rtu_init(void) {
	eMBErrorCode eStatus;

	eStatus = eMBInit( MB_RTU, BOX1_MB_ADDR, 0, BOX1_MB_BAUDRATE, MB_PAR_NONE);
	eStatus = eMBEnable();

	return eStatus;
}
