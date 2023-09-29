


#include "LIFO_Buff.h"
#include "stdio.h"
#include "stdlib.h"

unsigned int buffer1[5]; // 5*4bytes = 20bytes


void main ()
{
	int i,temp=0;
	LIFO_BUFF_t UART_LIFO, I2C_LIFO;
	//using static allocation
	LIFO_Init(&UART_LIFO, buffer1, 5);
	//using dynamic allocation
	unsigned int* buffer2 = (unsigned int*) malloc (5* sizeof(unsigned int)); // 5*4bytes = 20bytes
	LIFO_Init(&I2C_LIFO, buffer2, 5);

	printf("	Input from the LIFO \n\n");
	for (i=0; i<5; i++)
	{
		if (LIFO_Add_Item(&UART_LIFO,i) == LIFO_NO_ERROR) //Adding items to the LIFO
			printf("UART_LIFO add: %d \n",i);
	}

	printf("\n	Output from the LIFO \n\n");

	for (i=0; i<5; i++)
	{
		if (LIFO_Get_Item(&UART_LIFO,&temp) == LIFO_NO_ERROR) ////Getting items from the LIFO
			printf("UART_LIFO get: %d \n",temp);
	}

}
