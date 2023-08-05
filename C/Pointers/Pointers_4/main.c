/*
# * main.c
 *
 *  Created on: Aug 5, 2023
 *      Author: Peter
 */
#include "stdio.h"

int main(){
	int arr[15],n,i;
	int *ptr;
	printf("Enter the number of elements \n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	fflush(stdin); fflush(stdout);
	printf("Array elements \n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Reversed order \n");
	fflush(stdin); fflush(stdout);
	ptr=&arr[n-1];
	for(i=0;i<n;i++){
			printf("%d \n",*ptr);
			ptr--;
		}
	return 0;
}
