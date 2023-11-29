/*
 * main.c
 *
 *  Created on: 28 Nov 2023
 *      Author: P.Botros
 */

#include <stdint.h>
#include <stdio.h>
#include "alarm_monitor.h"
#include"pressure_detector.h"
#include "alarm_actuator.h"
#include "pressure_sensor.h"
#include "state.h"
void setup(){
	GPIO_INITIALIZATION();
	Sensor_init();
	Alarm_init();
	pressure_detector =state(waiting_state);
	monitor =state(monitor_waiting);
	alarm = state(alarm_waiting);
}
int main (){
	setup();
	while (1)
	{
		Sensor();
		pressure_detector();
		monitor();
		alarm();
		Delay(500000);
	}
}
