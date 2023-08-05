#include "stdio.h"
int main(){
	int arr[5][5],t[50][50],i,j,r,c;
	fflush(stdin);fflush(stdout);
	printf("Enter number of rows :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);
	fflush(stdin);fflush(stdout);
	printf("Enter number of columns :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			fflush(stdin);fflush(stdout);
			printf("Enter element %d * %d :",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);
			t[j][i]=arr[i][j];
		}
	}
	fflush(stdin);fflush(stdout);
	printf("Original array %d * %d :",i+1,j+1);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			fflush(stdin);fflush(stdout);
			printf("%d \t",arr[i][j]);
			if(j==c-1)
				printf("\n");

		}
	}

	fflush(stdin);fflush(stdout);
	printf("Transposed array %d * %d :",j+1,i+1);
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			fflush(stdin);fflush(stdout);
			printf("%d \t",t[i][j]);
			if(j==r-1)
				printf("\n");
		}
	}
	return 0;
}
