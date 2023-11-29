/*
 * main.c
 *
 *  Created on: 19 Oct 2023
 *      Author: P.Botros
 */


#include "st.h"

#define STUDENTS_NUMBER 50


int main(void)
{
	int select_option;
	Squeue Q;
	Element_Type students_buffer[STUDENTS_NUMBER];

	// Solving I/O form console Problem
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	Q_init(&Q, students_buffer, STUDENTS_NUMBER);
	printf("Welcome to the Student Management System\n");



	while(1)
	{
		printf(" =============================\n");
		printf("\n Choose on of the following options \n");
		printf("\n\t 1: Add Student Manually");
		printf("\n\t 2: Find Student by Roll Number");
		printf("\n\t 3: Find Student by First Name");
		printf("\n\t 4: Find Student by Course ID");
		printf("\n\t 5: Print Students Number");
		printf("\n\t 6: Delete Student by Roll Number");
		printf("\n\t 7: Update Student by Roll Number");
		printf("\n\t 8: View Students");
		printf("\n\t 9: Exit");
		printf("\n\n Enter option number: ");

		scanf("%d",&select_option);
		printf(" ============================= \n");
		switch(select_option)
		{
			case 1: add_student_manualy(&Q);break;
			case 2: find_student_by_roll(&Q);break;
			case 3: find_student_by_firstname(&Q);break;
			case 4: find_student_by_course(&Q);break;
			case 5: print_students_count(&Q);break;
			case 6: delete_student_by_roll(&Q);break;
			case 7: update_student_by_roll(&Q);break;
			case 8: show_students_info(&Q);break;
			case 9: exit(0); break;
			default: printf("\n Wrong Option: Try Again \n\n");break;
		}
	}
	return 0;
}
