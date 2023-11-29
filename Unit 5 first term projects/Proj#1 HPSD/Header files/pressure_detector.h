/*
 * pressure_detector.h
 *
 *  Created on: 28 Nov 2023
 *      Author: P.Botros
 */

#ifndef PRESSURE_DETECTOR_H_
#define PRESSURE_DETECTOR_H_

#include "state.h"
enum{
	waiting_state
}pressure_detector_state;
state_define(waiting_state);
extern void (*pressure_detector)();


#endif /* PRESSURE_DETECTOR_H_ */
