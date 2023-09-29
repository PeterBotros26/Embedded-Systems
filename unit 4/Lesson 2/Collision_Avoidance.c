

#include "State.h"
#include "Collision_Avoidance.h"

//Variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

//State Pointer to Function
void (*CA_state) ();


void US_Set_distance(int d)
{
	CA_distance = d;
	(CA_distance <= CA_threshold)? (CA_state = STATE(CA_waiting)) :  (CA_state = STATE(CA_driving));
	printf("US >> Distance = %d  >> CA ", CA_distance);
}

STATE_define (CA_waiting)
{

	//State Name
	CA_state_id = CA_waiting;
	printf(" CA waiting state:  Distance = %d 	Speed = %d \n", CA_distance, CA_speed);

	//State Action
	CA_speed = 0;
	DC_motor(CA_speed);
}

STATE_define (CA_driving)
{
	//State Name
		CA_state_id = CA_driving;
		printf(" CA driving state:  Distance = %d 	Speed = %d \n", CA_distance, CA_speed);

		//State Action
		CA_speed = 30;
		DC_motor(CA_speed);
}
