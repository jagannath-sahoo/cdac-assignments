#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MARKS_SIZE 5

typedef struct STUDENT{
	char name[20];
	int roll;
	float marks[MARKS_SIZE];
	float total marks;
	int rank;
	struct STUDENT *next;
}STUDENT_st;


void addStudent(STUDENT_st **hptr,const char *name,int *rol, float *mark);
void display(STUDENT_st *hptr)
float totalMarks(STUDENT_st *hptr);

int main()
{
	float m[] = {100,200,300,400,500};
	int rol = 33;
	STUDENT_st *head = NULL;
	addStudent(&head,"JAGANNATH",&rol,m);
	//display(head);
	float m1[] = {10,20,30,40,50};
        rol = 34;
	addStudent(&head,"SAHOO",&rol,m1);
	//display(head);
 	float m2[] = {101,202,303,404,505};
        rol = 35;	
	addStudent(&head,"SIPU",&rol,m2);
	display(head);

	return 0;
}


void addStudent(STUDENT_st **hptr,const char *name,int *rol, float *mark)
{
	//Temp storage for new node
	STUDENT_st *temp = (STUDENT_st *)calloc(1,sizeof(STUDENT_st));
	strcpy(temp->name,name);
	temp->roll = *rol;
	temp->next = NULL;
	for(int i = 0; i < MARKS_SIZE;i++)
	{
		temp->marks[i] = mark[i];
	}
	//Update to linked list
	if(*hptr == NULL)
	{
		*hptr = temp;
	}
	else
	{
		temp->next = *hptr;
		*hptr = temp;
	}
}

void display(STUDENT_st *hptr)
{
	STUDENT_st *temp = hptr;
	while(temp != 0)
	{
		printf("NAME: %s\n",temp->name);
		printf("Roll: %d\n",temp->roll);
		for(int i = 0; i < MARKS_SIZE; i++)
		{
			printf("MARKS of %dth: %f\n",i,temp->marks[i]);
		}
		temp = temp->next;
	}
}
