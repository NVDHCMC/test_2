/*
 * box1_mb_configurations.h
 *
 *  Created on: Nov 5, 2018
 *      Author: yoxx
 */

#ifndef CONFIGURATIONS_BOX1_MB_CONFIGURATIONS_H_
#define CONFIGURATIONS_BOX1_MB_CONFIGURATIONS_H_

#define BOX1_REG_HOLDING_START   40001
#define BOX1_REG_HOLDING_NREGS   4
#define BOX1_MB_ADDR     (uint16_t)(0x03)
#define BOX1_MB_BAUDRATE			9600//115200

typedef enum
{
	USTEMP_MAIN     = 1          ,
	USHUMID_MAIN                 ,
	USTEMP_SUB                   ,
	USHUMID_SUB                   ,
	PH_DATA                   ,
	RESERVED_2                   ,
	RESERVED_3                   ,
	RESERVED_4                   ,
	RESERVED_5                   ,
	RESERVED_6                   ,
	UCFIRE                       ,
	UCSMOKE                      ,
	UCWATER                      ,
	DOOR1                        ,
	DOOR2                        ,
	DOOR3                        ,
	DOOR4                        ,
	DOOR5                        ,
	AIR1                         ,
	AIR2                         ,
	AIR3                         ,
	AIR4                         ,
	FAN1                         ,
	FAN2                         ,
	FAN3                         ,
	FAN4                         ,
	BUZZER                       ,
	LED                          ,
	BUGLAR                   ,
	RESERVED_8                   ,
	ALARM_WARNING_HIGH                ,
	ALARM_WARNING_LOW                  ,
	RESERVED_11                  ,
	RESERVED_12                  ,
	RESERVED_13                  ,
	RESERVED_14                  ,
	USCURRENTMAINVOLTAGE         ,
	USCURRENTGENFUEL             ,
	USCURRENTGENVOLTAGE          ,
	USCURRENTGENBATTERYVOLTAGE   ,
	USCURRENTGENCOOLANTTEMP      ,
	USCURRENTGENENGINESPEED      ,
	USCURRENTGENOILPRESSURE      ,
	USCURRENTGENCURVOLTAGE       ,
	USCURRENTMAINFREQ            ,
	USCURRENTGENFREQ             ,
	USCURRENTGENMODE             ,
	RESERVED_15                  ,
	RESERVED_16                  ,
	RESERVED_17                  ,
	USLOWTEMPERATURET1           ,
	USHIGHTEMPERATURET2          ,
	USFANTEMPERATURET3           ,
	USLOWHUMIDITYH1              ,
	USHIGHHUMIDITYH2             ,
	USLOWMAINVOLTAGE             ,
	USHIGHMAINVOLTAGE            ,
	USGENFUELLOWVALUE            ,
	USGENVOLTAGEALARMVALUE       ,
	USGENBATTERYVOLTAGEALARMVALUE,
	USGENCOOLANTTEMPALARMVALUE   ,
	USGENENGINESPEEDALARMVALUE   ,
	USGENOILPRESSUREALARMVALUE   ,
	ULSWITCHINGTIME              ,
	ULMINSWITCHINGTIME           ,
	ULSTAYOFFTIME                ,
	UCENABLEALARM                ,
	UCDOORBURGLARENABLEALARM     ,
	ULALARMDURATION              ,
	UC_REBOOT                  ,
	RESERVED_19                  ,
	US_RTC_SEC,
	US_RTC_MIN,
	US_RTC_HOUR,
	US_RTC_DAY,
	US_RTC_MONTH,
	US_RTC_YEAR,
	US_SW_SEC,
	US_SW_MINUTE,
	US_SW_HOUR,
	VOLTAGE_RMS         ,
	CURRENT_SIG         ,
	CURRENT_EXP         ,
	ACTIVE_POWER_SIG    ,
	ACTIVE_POWER_EXP    ,
	ENERGY_SIG          ,
	ENERGY_EXP          ,
	REG_HOLDING_NREGS
} BOX1_RegHoldingAddressOffset_t;



#endif /* CONFIGURATIONS_BOX1_MB_CONFIGURATIONS_H_ */
