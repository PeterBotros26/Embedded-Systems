# include "stdio.h"
int main(){

	int arr[20],i,loc,val,num;


	fflush(stdin);fflush(stdout);
	printf("Enter numbers of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	for(i=0;i<num;i++){
		fflush(stdin);fflush(stdout);
		printf("Enter element %d :",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	fflush(stdin);fflush(stdout);
	printf("Enter the location of inserted  element");
	fflush(stdin);fflush(stdout);
	scanf("%d",&loc);

	fflush(stdin);fflush(stdout);
	printf("Enter the value of inserted  element");
	fflush(stdin);fflush(stdout);
	scanf("%d",&val);

	for(i=num;i>=loc;i--){
		arr[i]=arr[i-1];

	}
	arr[loc-1]=val;


	for(i=0;i<=num;i++){
			printf(" %d ",arr[i]);
		}
}
