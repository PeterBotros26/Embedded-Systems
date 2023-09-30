/*
 * student_DB.c
 *
 *  Created on: 25 Sep 2023
 *      Author: P.Botros
 */
#include"student_DB.h"

Squeue Q;
Sstudent *first_student=NULL;

void add_student_file(){
	FILE *file;
	char filename[] = "StudentData.txt";
	int i,j;
	Sstudent student;
	Sstudent* check_student= Q.tail;
	if(Q.count == Q.lenght){
		DPRINTF("\nThe list is full please delete a student");
	}else{

		// Open the file for reading
		file = fopen(filename,"r");
		if (file == NULL) {
			DPRINTF("\n[ERROR] This File Doesn't exist");
		}

		while(!feof(file)) {

			fscanf(file, "%d", student.roll);
			int is_duplicate = 0;

			// Check for duplicate ID within the array
			for (i=0;i<Q.count; i++) {
				if (check_student->roll == student.roll) {
					DPRINTF("\n[ERROR] Duplicate Roll Number %d found. Skipping.\n", student.roll);
					is_duplicate = 1;
					break;
				}
			}
			if(is_duplicate){
				fscanf(file, "%*[^\n]");
				continue;
			}else{

				// If not a duplicate, add the student to the array
				fscanf(file, "%s", student.f_name);
				fscanf(file, "%s", student.l_name);
				fscanf(file, "%f", student.gpa);


				for (int i = 0; i < 5; ++i)
				{
					fscanf(file, "%d", student.c_id[i]);
				}
				if(first_student==NULL){
					DPRINTF("Enter number of students");
					gets(atoi(Q.lenght));
					Q.base=first_student;
					Q.head=first_student;
					Q.base=first_student;
					//first_student=student;
				}
				(*Q.head)=student;
				Q.count++;
				if(Q.head>=(Q.base+(sizeof(Sstudent)*Q.lenght)))
					Q.head=Q.base;
				else
					Q.head++;
				DPRINTF("\n[INFO] Roll Number %d Saved Successfully.\n", student.roll);

			}
		}
	}
}



void add_student_manually(){
	int j;
	Sstudent student;
	if(first_student==NULL){
		first_student=&student;
		Q.lenght=50;
		Q.count=0;
		Q.base=first_student;
		Q.head=first_student;
		Q.base=first_student;

		DPRINTF("Count = %u \n",Q.count);
	}
	DPRINTF("Enter student first name\n");
	scanf("%s",&(student.f_name));
	DPRINTF("Enter student last name\n");
	scanf("%s",&(student.l_name));
	DPRINTF("Enter student ID\n");
	scanf("%u",&(student.roll));
	DPRINTF("Enter student GPA\n");
	scanf("%f",&(student.gpa));
	DPRINTF("Enter courses registered by student\n");
	for(j=0;j<5;j++){
		DPRINTF("Course %d: \n",j+1);
		DSCANF("%d",&(student.c_id[j]));
	}
	(*Q.head)=student;
	Q.count++;
	if(Q.head==(Q.base+(sizeof(Sstudent)*Q.lenght)))
		Q.head=Q.base;
	else
		Q.head++;
	DPRINTF("Count = %u \n",Q.count);
	DPRINTF("Student %s was added successfully \n",student.f_name);
}

void find_rl(){
	uint32 rl;
	int i,j;
	DPRINTF("\nEnter student roll number : ");
	scanf("%u",&rl);
	Sstudent* ptrstudent=Q.head;
	Sstudent student;
	for(i=0;i<Q.count;i++){
		student=(*ptrstudent);
		if(student.roll==rl){
			DPRINTF("\n The student Details");
			DPRINTF("\n-----------------------");
			DPRINTF("\n Student First name: %s ",student.f_name);
			DPRINTF("\n Student Last name: %s ",student.l_name);
			DPRINTF("\n GPA: %f ",student.gpa);
			DPRINTF("Courses registered by student : ");
			for(j=0 ; j<5;j++){
				DPRINTF("%d ",student.c_id[j]);
			}
			break;
		}
		else ptrstudent--;
	}
}

void find_fn(){
	char fn[20];
	int i,j;
	DPRINTF("\nEnter student first name : ");
	scanf("%s",&fn);
	Sstudent* student=Q.head;
	for(i=0;i<Q.count;i++){
		if(strcmp(student->f_name,fn)==0){
			DPRINTF("\n The student Details");
			DPRINTF("\n-----------------------");
			DPRINTF("\n Student First name: %s ",student->f_name);
			DPRINTF("\n Student Last name: %s ",student->l_name);
			DPRINTF("\n GPA: %f ",student->gpa);
			DPRINTF("Courses registered by student : ");
			for(j=0 ; j<5;j++){
				DPRINTF("%d ",student->c_id[j]);
			}
			break;
		}else student--;
	}

}


void find_c(){
	Sstudent* student=Q.tail;
	int i,j;
	if(Q.count==0){
		DPRINTF("\nList is empty");
		return;
	}
	DPRINTF("\nEnter Course ID: ");
	int id;
	scanf("%d",&id);
	for( i=0;i<Q.count;i++){
		for( j=0 ; j<5;j++){
			if(id== student->c_id[j]){
				DPRINTF("\n The student Details");
				DPRINTF("\n-----------------------");
				DPRINTF("\nRoll number : %d ",student->roll);
				DPRINTF("\n Student First name: %s ",student->f_name);
				DPRINTF("\n Student Last name: %s ",student->l_name);
				DPRINTF("\n GPA: %f ",student->gpa);

			}else student++;
		}
	}
}


void tot_s(){
	DPRINTF("Number of students : %d ", Q.count);
}

void up_s(){
	int rl,i,j;
	Sstudent* ptrstudent=Q.head;
	Sstudent student;
	if( Q.count == 0 ){
		DPRINTF("Sorry... No student \n");
		return;
	}
	DPRINTF("Enter the student ID: \n");
	scanf("%d",&rl);
	for( i=0;i<Q.count;i++){
		if(ptrstudent->roll==rl){
			DPRINTF("Enter student first name ");
			scanf("%s",student.f_name);
			DPRINTF("Enter student last name")
			scanf("%s",student.l_name);
			DPRINTF("Enter student GPA ");
			scanf("%f",student.gpa);
			for(j=0 ; j<5;j++){
				DPRINTF("Enter courses registered by student");
				scanf("%s",student.c_id[j]);
			}
			(*ptrstudent)=student;
			break;
		}else{
			ptrstudent--;
		}
	}
}


void del_s(){
	if(Q.count==0){
		DPRINTF("\nList is empty ");
		return;
	}
	Sstudent* student=Q.tail;
    Q.count--;
    // circular fifo
    if (Q.tail == (Q.base + Q.lenght))
    	Q.tail = Q.base;
    else
    	Q.tail++;
}

void show_s(){
	//Sstudent* ptrstudent=Q.tail;
	Sstudent* student=Q.tail;
	if(Q.count==0){
		DPRINTF("\nList is empty ");
		return;
	}

	int i,j;
	DPRINTF("All Student Details ");
	for(i=0;i<Q.count;i++){
		//student=(*ptrstudent);
		DPRINTF("\nRoll number: %u ",student->roll);
		DPRINTF("\nStudent First name : %s ",student->f_name);
		DPRINTF("\nStudent Last name : %s ",student->l_name);
		DPRINTF("\nGPA: %f ",student->gpa);
		DPRINTF(" \nRegistered Courses: ");
		for(j=0 ; j<5;j++){
				DPRINTF(" %d ",student->c_id[j]);
		}
		student++;
	}
}
