

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"


#define DPRINTF(...)	{fflush(stdout); \
		fflush(stdin); \
		printf (__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}

struct SStudent* gPFirstStudent = NULL;



//Effective Data
struct Sdata {
	int ID;
	char Name[40];
	float height;
};

//Linked List Node
struct SStudent
{
	struct Sdata Student;
	struct SStudent* PNextStudent;
};

void Add_Student ()
{
	struct SStudent* PNewStudent;
	struct SStudent* PLastStudent;
	char temp_text[40];
	//Check if the List is Empty
	if(gPFirstStudent == NULL)
	{
		//Create New Record
		PNewStudent = (struct SStudent*) malloc (sizeof(struct SStudent));
		//Assign the New Record to the GPFirst
		gPFirstStudent = PNewStudent;
	}
	else //The List Already Contains Records
	{
		//Navigate Till We Reach the End of the List
		PLastStudent = gPFirstStudent;
		while(PLastStudent->PNextStudent)
			PLastStudent = PLastStudent->PNextStudent;
		//Create New Record
		PNewStudent = (struct SStudent*) malloc (sizeof(struct SStudent));
		PLastStudent->PNextStudent = PNewStudent;
	}

	//Fill Data of New Student
	DPRINTF("\n Enter the ID: ");
	gets(temp_text);
	PNewStudent->Student.ID = atoi(temp_text);

	DPRINTF("\n Enter the Name: ");
	gets(PNewStudent->Student.Name);

	DPRINTF("\n Enter the Height: ");
	gets(temp_text);
	PNewStudent->Student.height = atof(temp_text);

	//Set the Next Pointer of the New Student to NULL
	PNewStudent->PNextStudent = NULL;
}

int Delete_Student ()
{
	char temp_text[40];
	unsigned int Selected_ID;

	//Get the Selected ID
	DPRINTF("\n Enter the ID of the Student to be Deleted: ");
	gets(temp_text);
	Selected_ID = atoi(temp_text);

	//Check if the List is Empty
	if(gPFirstStudent)
	{
		struct SStudent* PSelectedStudent = gPFirstStudent;
		struct SStudent* PPrevStudent = NULL;

		//Start Searching for the Correct ID
		while(PSelectedStudent)
		{
			//Compare Each Node with the Selected ID
			if(PSelectedStudent->Student.ID == Selected_ID)
			{
				if(PPrevStudent)//The Selected Student Is Not the First Student on the List
				{
					PPrevStudent->PNextStudent = PSelectedStudent->PNextStudent;
				}
				else //The Selected Student Is the First Student on the List
				{
					gPFirstStudent = PSelectedStudent->PNextStudent;
				}
				free(PSelectedStudent);
				return 1;
			}
			//Keep Moving across the List
			PPrevStudent = PSelectedStudent;
			PSelectedStudent = PSelectedStudent->PNextStudent;
		}

		DPRINTF(" \n Student ID Cannot be Found \n ");
		return 0;
	}
}


void View_Nth_Student ()
{
	//Check if the List is Empty
	if(gPFirstStudent == NULL)
	{
		DPRINTF("\n The List is Empty \n");
	}
	else
	{
		int index = 1, flag = 0,num=0;
		struct SStudent* PNthStudent = gPFirstStudent;

		DPRINTF("\n Enter the Order of the Student In the List: ");
		scanf("%d",&num);
		//Search for the Index Inside the List
		while(PNthStudent)
		{
			if(index == num)
			{
				DPRINTF("\n Student Number %d", index);
				DPRINTF("\n Student ID: %d", PNthStudent->Student.ID);
				DPRINTF("\n Student Name: %s", PNthStudent->Student.Name);
				DPRINTF("\n Student Height: %f", PNthStudent->Student.height);
				flag=1;
				break;
			}
			else
			{
				PNthStudent = PNthStudent->PNextStudent;
				index++;
			}
		}
		if(flag == 0)
			DPRINTF("\n Invalid Student Number ");
	}
}

void View_All_Students ()
{
	struct SStudent* PCurrentStudent = gPFirstStudent;
	int count=0;

	//Check if the List is Empty
	if(gPFirstStudent == NULL)
	{
		DPRINTF("\n The List is Empty \n");
	}
	else
	{
		while(PCurrentStudent)
		{
			DPRINTF("\n Student Number %d", count+1);
			DPRINTF("\n Student ID: %d", PCurrentStudent->Student.ID);
			DPRINTF("\n Student Name: %s", PCurrentStudent->Student.Name);
			DPRINTF("\n Student Height: %f", PCurrentStudent->Student.height);
			PCurrentStudent = PCurrentStudent->PNextStudent;
			count++;
		}
	}

}

void Delete_All_Students ()
{
	struct SStudent* PCurrentStudent = gPFirstStudent;
	struct SStudent* PTempStudent;

	//Check if the List is Empty
	if(gPFirstStudent == NULL)
	{
		DPRINTF("\n The List is Empty \n");
	}
	else
	{
		while(PCurrentStudent)
		{
			PTempStudent = PCurrentStudent;
			PCurrentStudent = PCurrentStudent->PNextStudent;
			free(PTempStudent);
		}
		gPFirstStudent = NULL;
		DPRINTF("\n All Students Have Been Deleted \n");
	}

}


int Num_Of_Students (struct SStudent* PNumOfStudents)
{

	if(PNumOfStudents)
	{
		return (1 + Num_Of_Students (PNumOfStudents->PNextStudent));
	}
	else
	{
		return 0;
	}
}

void Reverse_List_of_Students ()
{
	struct SStudent* pCurrentStudent = gPFirstStudent->PNextStudent;
	struct SStudent* pPreviousStudent = gPFirstStudent;
	struct SStudent* pNext = gPFirstStudent;
	gPFirstStudent->PNextStudent = NULL;

	while(pCurrentStudent)
	{
		pNext = pCurrentStudent->PNextStudent;
		pCurrentStudent->PNextStudent = pPreviousStudent;
		pPreviousStudent = pCurrentStudent ;
		pCurrentStudent = pNext;
	}
	gPFirstStudent = pPreviousStudent;
}


void main ()
{
	char temp_text[40];
	int num=0;
	while(1)
	{
		DPRINTF("\n =====================================================");
		DPRINTF("\n\t Choose One of the Following Options \n");
		DPRINTF("\n 1: Add Student ");
		DPRINTF("\n 2: Delete Student ");
		DPRINTF("\n 3: View All Students ");
		DPRINTF("\n 4: Delete All Students ");
		DPRINTF("\n 5: View Nth Student ");
		DPRINTF("\n 6: Number Of Students ");
		DPRINTF("\n 7: Reverse List Of Students ");
		DPRINTF("\n Enter Option Number: ");

		gets(temp_text);
		DPRINTF("\n =====================================================");

		switch(atoi(temp_text))
		{
		case 1:
			Add_Student();
			break;
		case 2:
			Delete_Student();
			break;
		case 3:
			View_All_Students();
			break;
		case 4:
			Delete_All_Students();
			break;
		case 5:
			View_Nth_Student();
			break;
		case 6:
			num = Num_Of_Students (gPFirstStudent);
			DPRINTF("\n The Total Number of Students is: %d", num);
			break;
		case 7:
			Reverse_List_of_Students ();
			break;
		default:
			DPRINTF("\n Invalid Option Number, Please Try Again ");
			break;
		}

	}
}
