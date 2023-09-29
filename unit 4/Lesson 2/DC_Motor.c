

#include "stdio.h"
#include "stdlib.h"
#include "DC_Motor.h"

//Variables
unsigned int DC_speed = 0;

//Pointer to Function
void (*DC_state)();

void DC_init()
{
	//Initialize the PWM
	printf(" DC Motor Has Been Initialized \n");
}

DC_motor(int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf(" Sending the speed from the CA to the DC Motor ");
}

STATE_define(DC_idle)
{
	//State Name
	DC_state_id = DC_idle;

	printf(" DC Idle State >> Speed = %d \n", DC_speed);
}

STATE_define(DC_busy)
{
	//State Name
	DC_state_id = DC_busy;

	//State Action


	//Calling the DC Driver
	DC_state = STATE(DC_idle);

	printf(" DC Busy State >> Speed = %d \n", DC_speed);
}

