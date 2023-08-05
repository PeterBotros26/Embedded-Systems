/*
 * main.c
 *
 *  Created on: Jul 7, 2023
 *      Author: Peter
 */
#include "stdio.h"
struct SStudent{
	char name[50];
	int roll;
	float mark;
};

int main(){
	struct SStudent s1;
	fflush(stdin);fflush(stdout);
	printf("Enter student name,roll and mark ");
	fflush(stdin);fflush(stdout);
	scanf("%s %d %f",s1.name,&s1.roll,&s1.mark);
	fflush(stdin);fflush(stdout);
	printf("%s %d %f",s1.name,s1.roll,s1.mark );
	return 0;
}
