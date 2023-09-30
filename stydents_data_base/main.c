/*
 * main.c
 *
 *  Created on: 25 Sep 2023
 *      Author: P.Botros
 */
#include"student_DB.h"
void main(){
		int num;

	DPRINTF("\nWelcome to Student Management System");
	while(1){
		DPRINTF("\n-----------------------");
		DPRINTF("\nChoose The Task that you want to perform");
		DPRINTF("\n1. Add The Student Details Manually");
		DPRINTF("\n2. Add The Student Details From Text File");
		DPRINTF("\n3. Find The Student Details by Roll Number");
		DPRINTF("\n4. Find The Student Details by First Name");
		DPRINTF("\n5. Find The Student Details by Course ID");
		DPRINTF("\n6. Find Total number of Students");
		DPRINTF("\n7. Delete The Student Details by Roll Number");
		DPRINTF("\n8. Update The Student Details by Roll Number");
		DPRINTF("\n9. Show all information");
		DPRINTF("\n10. To Exit");
		DPRINTF("\nEnter your choice to perform a task\n")
		scanf("%d",&num);
		DPRINTF("\n-----------------------\n");
		switch(num){
		case 1:
			add_student_manually();
			break;
		case 2:
			add_student_file();
			break;
		case 3:
			find_rl();
			break;
		case 4:
			find_fn();
			break;
		case 5:
			find_c();
			break;
		case 6:
			tot_s();
			break;
		case 7:
			del_s();
			break;
		case 8:
			up_s();
			break;
		case 9:
			show_s();
			break;
		case 10:
			exit(0);
			break;
		default:
			DPRINTF("\n[ERROR]You entered invalid choice please try again ");
		}
	}

}
