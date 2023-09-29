

#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"

//Automatic State Function Generation
#define STATE_define(_stateFunc_) void ST_##_stateFunc_()
#define STATE(_stateFunc_) ST_##_stateFunc_

//State Connection
void US_Set_distance( int d);
void DC_motor (int s);

#endif /* STATE_H_ */
