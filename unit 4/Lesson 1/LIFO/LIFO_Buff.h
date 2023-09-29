

#ifndef LIFO_BUFF_H_
#define LIFO_BUFF_H_

//type definitions
typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_BUFF_t;

typedef enum {
	LIFO_NO_ERROR,
	LIFO_FULL,
	LIFO_EMPTY,
	LIFO_NULL
}LIFO_STATUS;

//APIs
LIFO_STATUS LIFO_Add_Item (LIFO_BUFF_t* lifo_buff, unsigned int item);
LIFO_STATUS LIFO_Get_Item (LIFO_BUFF_t* lifo_buff, unsigned int* item);
LIFO_STATUS LIFO_Init (LIFO_BUFF_t* lifo_buff, unsigned int* buf, unsigned int length);

#endif /* LIFO_BUFF_H_ */
