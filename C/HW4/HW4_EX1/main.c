/*
 * main.c
 *
 *  Created on: Jul 4, 2023
 *      Author: Peter
 */
#include "stdio.h"
int isPrime(int num){
	int i;
	for(i=2;i<num;i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int i,start,end,x;
	fflush(stdin);fflush(stdout);
	printf("Enter two numbers");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&start,&end);
	fflush(stdin);fflush(stdout);
	printf("prime number between %d and %d are : ",start,end);
	for(i=start;i<=end;i++){
			if(isPrime(i))
				printf("%d ",i);
		}
	return 0;
}
