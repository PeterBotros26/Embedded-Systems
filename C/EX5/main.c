#include "stdio.h"
int main(){
	int i,arr[10],n,val,flag=0;
	fflush(stdin);fflush(stdout);
	printf("Enter numbers of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		fflush(stdin);fflush(stdout);
		printf("Enter element %d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	fflush(stdin);fflush(stdout);
	printf("Enter the element to be searched");
	fflush(stdin);fflush(stdout);
	scanf("%d",&val);

	for(i=0;i<n;i++){
		if(arr[i]==val){
			flag=1;
			printf("Enter the element is found with index %d",i);
			break;
		}
	}
	if(flag==0)
		printf("the element is not exist");
	return 0;
}
