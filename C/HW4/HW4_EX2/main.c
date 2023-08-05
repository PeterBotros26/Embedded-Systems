/*
 * main.c
 *
 *  Created on: Jul 6, 2023
 *      Author: Peter
 */
#include "stdio.h"
int factorial(int i){
	if(i>1)
		return i*factorial(i-1);
}
int main(){
	int num;int f;
	fflush(stdin);fflush(stdout);
	printf("Enter a number");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	f=factorial(num);
	printf("%d",f);
}
