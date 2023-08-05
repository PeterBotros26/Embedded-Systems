/*
 * main.c
 *
 *  Created on: Jul 6, 2023
 *      Author: Peter
 */
#include"stdio.h"
void reverse(){
	char c;
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c !='\n'){
		reverse();
		fflush(stdin);fflush(stdout);
		printf("%c",c);
	}
}
int main(){
	fflush(stdin);fflush(stdout);
	printf("Enter a sentence \n");
	reverse();
	return 0;
}
