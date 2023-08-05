/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Peter
 */
#include "stdio.h"
void main(){
	int m;
	int *ab = &m;
	m = 29;
	printf("Address of m = %x, Address of ab = %x \n",&m,ab);
	printf("Value of m = %d, Value of ab = %d \n",m,*ab);
	m=7;
	printf("Address of m = %x, Address of ab = %x \n",&m,ab);
	printf("Value of m = %d, Value of ab = %d \n",m,*ab);
	*ab=34;
	printf("Address of m = %x, Address of ab = %x \n",&m,ab);
	printf("Value of m = %d, Value of ab = %d \n",m,*ab);
}
