

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "State.h"

//Defining DC Motor States
enum {
	DC_idle,
	DC_busy
}DC_state_id;

//Prototypes
void DC_init();
STATE_define(DC_idle);
STATE_define(DC_busy);

//Global Pointer to Function
extern void (*DC_state)();

#endif /* DC_MOTOR_H_ */
