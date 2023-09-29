
#ifndef ULTRASONIC_SENSOR_H_
#define ULTRASONIC_SENSOR_H_

#include "State.h"

enum {
	US_busy
}US_state_id;

//Prototypes
void US_init();
STATE_define(US_busy);

//Global Pointer to a Function
extern void (*US_state)();

#endif /* ULTRASONIC_SENSOR_H_ */
