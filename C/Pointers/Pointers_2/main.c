/*
 * main.c
 *
 *  Created on: Jul 30, 2023
 *      Author: Peter
 */
#include "stdio.h"
int main(){
	int i;
	char alpha[27];
	char* ptr;
	ptr=alpha;
	for(i=0;i<26;i++){
		*ptr='A'+i;
		 ptr++;
	}
	ptr=alpha;
	for(i=0;i<26;i++){
			printf(" %c ",*ptr);
			ptr++;
		}
	return 0;
}
