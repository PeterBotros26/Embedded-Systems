/*
 * main.c
 *
 *  Created on: Jul 3, 2023
 *      Author: Peter
 */
#include "stdio.h"
int main(){
	char arr[100],c;
	int i=0,count=0;
	fflush(stdin);fflush(stdout);
	printf("Enter the text :\n");
	fflush(stdin);fflush(stdout);
	gets(arr);
	fflush(stdin);fflush(stdout);
	printf("Enter the char :\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	while(arr[i]!='\0'){
		if(arr[i]==c)
			count++;
		i++;
	}
	fflush(stdin);fflush(stdout);
	if(count>0)
		printf(" The number of repeating times %d :\n",count);
	else
		printf(" Not exist ");
	return 0;
}
