# include "stdio.h"
# include "string.h"
int main (){
	char arr[100],temp;
	int i=0,j;
	fflush(stdin);fflush(stdout);
	printf("Enter the text :\n");
	fflush(stdin);fflush(stdout);
	gets(arr);
	j=strlen(arr)-1;
	while(j>i){
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		i++;
		j--;
	}
	fflush(stdin);fflush(stdout);
	printf("%s",arr);
	return 0;
}
