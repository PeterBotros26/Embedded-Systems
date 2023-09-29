

#include "Collision_Avoidance.h"
#include "Ultrasonic_Sensor.h"
#include "DC_Motor.h"

void setup ()

{
	//Initialize all the drivers
	//Initialize IRQ ...
	//Initialize HAL, US_Driver, DC_Driver
	//Initialize BLOCK
	US_init();
	DC_init();

	//Set States Pointers for each Function
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}

void main ()
{
	volatile int d;

	setup();

	while(1)
	{
		//Call state for each block
		US_state ();
		CA_state ();
		DC_state ();

		//Delay
		for(d = 0; d <= 1000; d++);
	}
}
