

#include "Ultrasonic_Sensor.h"

//Global Pointer to Function
void (*US_state)();

//Module Variables
int US_distance = 0;

int generate_random_num(int l, int r, int count)
{
	//This will generate a random number in range between l and r

	int i;
	for(i = 0; i < count; i++)
	{
		int rand_num = (rand() % (r - l + 1)) + l;
		return rand_num;
	}
}

void US_init ()
{
	//Initialize the Ultrasonic Sensor
	//Call The Sensor's Driver or Functions
	printf("Ultrasonic Sensor Has been Initialized \n");
}

STATE_define (US_busy)
{
	//State Action
	US_state_id = US_busy;
	//Read from The Ultrasonic Sensor
	US_distance = generate_random_num(45,55,1);

	printf(" US_busy State >> Distance = %d \n", US_distance);

	US_Set_distance(US_distance);
	US_state = STATE(US_busy);
}
