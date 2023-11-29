/*
 * state.h
 *
 *  Created on: 28 Nov 2023
 *      Author: P.Botros
 */

#ifndef STATE_H_
#define STATE_H_

#include "driver.h"
#define state_define(x) void st_##x()
#define state(x) st_##x

void set_pressure_val(int pressure);
void high_pressure_detected();
void start_alarm();
void stop_alarm();

#endif /* STATE_H_ */
