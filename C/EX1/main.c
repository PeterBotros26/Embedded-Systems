#include"stdio.h"
int main(){
	int i,j;
	float x[2][2],y[2][2],z[2][2];
	fflush(stdin);fflush(stdout);
	printf("First array elements :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			fflush(stdin);fflush(stdout);
			printf("elements %d * %d \n",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	fflush(stdin);fflush(stdout);
	printf("Second array elements :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			fflush(stdin);fflush(stdout);
			printf("elements %d * %d \n",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&y[i][j]);
			z[i][j]=x[i][j]+y[i][j];
		}
	}

	fflush(stdin);fflush(stdout);
	printf("Sum of 2 arrays :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			fflush(stdin);fflush(stdout);
			printf(" %f\t",z[i][j]);
			if(j==1)
				printf("\n");
		}

	}
	return 0;}

