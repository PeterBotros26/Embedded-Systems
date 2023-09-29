

#include "LIFO_Buff.h"
#include "stdio.h"

//APIs
LIFO_STATUS LIFO_Add_Item (LIFO_BUFF_t* lifo_buff, unsigned int item)
{
	//check if lifo is valid
	if(!lifo_buff->base || !lifo_buff->head)
		return LIFO_NULL;

	//check if lifo is full
	if(lifo_buff->count == lifo_buff->length)
		return LIFO_FULL;

	//add value
	*(lifo_buff->head) = item;
	lifo_buff->head++;
	lifo_buff->count++;
	return LIFO_NO_ERROR;
}
LIFO_STATUS LIFO_Get_Item (LIFO_BUFF_t* lifo_buff, unsigned int* item)
{
	//check if lifo is valid
		if(!lifo_buff->base || !lifo_buff->head)
			return LIFO_NULL;

	//check if lifo is empty
		if(lifo_buff->count == 0)
			return LIFO_EMPTY;

	//getting the item
		lifo_buff->head--;
		*item = *(lifo_buff->head);
		lifo_buff->count--;
		return LIFO_NO_ERROR;
}
LIFO_STATUS LIFO_Init (LIFO_BUFF_t* lifo_buff, unsigned int* buf, unsigned int length)
{
	if (buf == NULL)
		return LIFO_NULL;

	lifo_buff->base = buf;
	lifo_buff->head = buf;
	lifo_buff->length = length;
	lifo_buff->count = 0;
	return LIFO_NO_ERROR;

}
