
#ifndef COLLISION_AVOIDANCE_H_
#define COLLISION_AVOIDANCE_H_

#include "State.h"

//Defining the States
enum {
	CA_waiting,
	CA_driving
}CA_state_id;

//Declare STATE Functions for CA
STATE_define(CA_waiting);
STATE_define(CA_driving);

//Global Pointer to Function
extern void (*CA_state)();

#endif /* COLLISION_AVOIDANCE_H_ */
