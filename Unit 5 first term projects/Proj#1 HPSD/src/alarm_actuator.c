/*
 * alarm_actuator.c
 *
 *  Created on: 28 Nov 2023
 *      Author: P.Botros
 */

#include "alarm_actuator.h"
 void (*alarm)();
void Alarm_init(){
	//printf("\n==========Alarm Actuator INITIALIZED===========\n");
	Set_Alarm_actuator(1);
}
void start_alarm(){
	Set_Alarm_actuator(0);
	//printf("\n==========Alarm Started===========\n");
	alarm = state(Alarm_ON);
}
void stop_alarm(){
	Set_Alarm_actuator(1);
	//printf("\n==========Alarm Stopped===========\n");
	alarm = state(Alarm_OFF);
}

state_define(alarm_waiting){
	alarm_state = alarm_waiting;
	//printf("\n==========Alarm Actuator in waiting state state===========\n");

}
state_define(Alarm_ON){
	alarm_state =Alarm_ON;
	//printf("\n==========Alarm Actuator in Alarm ON state===========\n");
	alarm =state(alarm_waiting);
}
state_define(Alarm_OFF){
	alarm_state =Alarm_OFF;
	//printf("\n==========Alarm Actuator in Alarm OFF state===========\n");
	alarm =state(alarm_waiting);
}
