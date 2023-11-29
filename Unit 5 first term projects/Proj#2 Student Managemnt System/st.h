/*
 * st.h
 *
 *  Created on: 19 Oct 2023
 *      Author: P.Botros
 */

#ifndef ST_H_
#define ST_H_


#include "stdio.h"
#include "string.h"
#include "stdlib.h"


#define NAME_LENGTH 20
#define COURSES_NUMBER 5

// Student Structures   student_info
struct Sstudent{
	char first_name[NAME_LENGTH];
	char last_name[NAME_LENGTH];
	int roll_number;
	float GPA;
	int course_id[COURSES_NUMBER];
};

// Data type of buffer item
typedef struct Sstudent Element_Type;   //Item

// Type Definition
typedef struct {
	Element_Type *base;
	Element_Type *head;
	Element_Type *tail;
	int length;
	int counter;
}Squeue;       //FIFO_Buf_st

typedef enum {
	FIFO_NO_ERROR,
	FIFO_FULL,
	FIFO_NOT_FULL,
	FIFO_EMPTY,
	FIFO_NOT_EMPTY,
	FIFO_NULL
}Q_Status;   //FIFO_Status_st

// Is the FIFO full ?!
Q_Status FIFO_is_full(Squeue *Q);

// Is the FIFO empty ?!
Q_Status FIFO_is_empty(Squeue *Q);

// Enqueue item in the FIFO given a data item
Q_Status FIFO_enqueue(Squeue *Q, Element_Type student);

// Student Queue Initialization
Q_Status Q_init(Squeue *students_queue, Element_Type *student, int length);

// Enter student data manually from console
void add_student_manualy(Squeue *Q);

// Get student date by its roll number
void find_student_by_roll(Squeue *Q);

// Get student date by its first name
void find_student_by_firstname(Squeue *Q);

// Get student date by its course
void find_student_by_course(Squeue *Q);

// Get students number in queue
void print_students_count(Squeue *Q);

// Delete student from the queue
void delete_student_by_roll(Squeue *Q);

// Update a specific data in queue
void update_student_by_roll(Squeue *Q);

// Print all students in the queue
void show_students_info(Squeue *Q);


#endif /* ST_H_ */
