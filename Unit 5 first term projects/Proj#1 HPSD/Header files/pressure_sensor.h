/*
 * pressure_senssor.h
 *
 *  Created on: 28 Nov 2023
 *      Author: P.Botros
 */

#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_

#include "state.h"
enum{
	Sensor_waiting,
	reading_values
}Sensor_state;
//state_define(Sensor_waiting);
state_define(reading_values);
extern void (*Sensor)();
void Sensor_init();


#endif /* PRESSURE_SENSOR_H_ */
