/*
 * main.c
 *
 *  Created on: Jul 3, 2023
 *      Author: Peter
 */
#include "stdio.h"
int main(){
	char arr[100];
	int i=0;
	fflush(stdin);fflush(stdout);
	printf("Enter the text :\n");
	fflush(stdin);fflush(stdout);
	gets(arr);
	while(arr[i]!='\0'){
		i++;
	}
	printf(" The length is  %d :\n",i);
	return 0;
}
