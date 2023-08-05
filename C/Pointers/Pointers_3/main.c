/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Peter
 */
#include"stdio.h"
int main(){
	char str[50];
	char revstr[50];
	char* ptr=str;
	char* revptr=revstr;
	int j,i=0;
	scanf("%s",str);
	while(*ptr){
		i++;
		ptr++;
	}
	for(j=0;j<i;j++){
		ptr--;
		*revptr=*ptr;
		revptr++;
	}
	printf("%s",revstr);
	return 0;
}
