/*
 * student_DB.h
 *
 *  Created on: 25 Sep 2023
 *      Author: P.Botros
 */

#ifndef STUDENT_DB_H_
#define STUDENT_DB_H_

#include <stdio.h>
#include <stdlib.h>
#include "string.h"


#define DPRINTF(...) {fflush(stdin);\
					  fflush(stdout);\
		              printf(__VA_ARGS__);\
		              fflush(stdin);\
		              fflush(stdout);}

#define DSCANF(...) {fflush(stdin);\
					  fflush(stdout);\
		              scanf(__VA_ARGS__);\
		              fflush(stdin);\
		              fflush(stdout);}


typedef unsigned int uint32;


typedef struct {
	char f_name [20];
	char l_name [20];
	uint32 roll;
	float gpa;
	int c_id[6];
}Sstudent;

typedef struct {
	uint32 lenght;
	uint32 count;
	Sstudent* head;
	Sstudent* tail;
	Sstudent* base;
}Squeue;

typedef enum{
	Q_no_error,Q_full,Q_null,Q_empty
	}Q_status;


//Q_status Q_validation(Squeue Q );
//void Q_init(uint32 length,Squeue Q,Sstudent* S );

void add_student_file();
void add_student_manually();
void find_rl();
void find_fn();
void find_c();
void tot_s();
void del_s();
void up_s();
void show_s();

#endif /* STUDENT_DB_H_ */
