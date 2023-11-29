/*
 * alarm_monitor.h
 *
 *  Created on: 28 Nov 2023
 *      Author: P.Botros
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"
enum{
	monitor_waiting,
	Alarm_Activated
}monitor_state;
state_define(monitor_waiting);
state_define(Alarm_Activated);
extern void (*monitor)();

#endif /* ALARM_MONITOR_H_ */
