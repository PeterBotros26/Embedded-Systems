# include "stdio.h"
int main (){
	int i,n;
	float arr[50],avg,sum=0.0;
	fflush(stdin);fflush(stdout);
	printf("Enter the numbers of data\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdin);fflush(stdout);
		printf("Enter numbers : %d \n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
	     sum=sum+arr[i];
	}
	avg=sum/n;
	fflush(stdin);fflush(stdout);
	printf("average : %f",avg);
	return 0;
}
