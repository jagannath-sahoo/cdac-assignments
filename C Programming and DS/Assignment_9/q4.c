/*
 * Q4. Create an employee structure with the following members
	empid, employee name, salary, year of joining etc.
	Accept the data for certain no. of employees and find their total,
	average, max, min salary.
	Also find out the employees with maximum, minimum service,use a
	function to find service for each employee element in the array.
 * */

#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<string.h>

typedef struct DATE{
	uint8_t day;
	int year;
	uint8_t month;
}DATE_st;

typedef struct EMPLOYEE
{
	uint16_t empID;
	char name[20];
	struct DATE *doj;
	float salary;
	struct EMPLOYEE *next;
}EMP_st;



void addEmployee(EMP_st  **ptr, DATE_st *dptr, char *name,float *sal, uint16_t *id);
int cmpDate(DATE_st *date1, DATE_st *date2);
void sort_doj(EMP_st **ptr);
void display(EMP_st *p);
void swap(EMP_st **ptr1,EMP_st **ptr2);

int main()
{
	EMP_st *head = NULL;
	DATE_st *date;
	date->day = 8;
	date->year = 2016;
	date->month = 6;
	float sal = 16777.8;
	uint16_t ID = 192;
	addEmployee(&head,date,"JAGANNATH",&sal,&ID);
        date->day = 16;
        date->year = 2017;
        date->month = 8;
        sal = 30000.8;
        ID = 230;
        addEmployee(&head,date,"Subham",&sal,&ID);

	display(head);
	return 0;
}



void swap(EMP_st **ptr1,EMP_st **ptr2)
{
	**ptr1 = **ptr1 ^ **ptr2;
	**ptr2 = **ptr1 ^ **ptr2;
	**ptr1 = **ptr1 ^ **ptr2;
}

void sort_doj(EMP_st **ptr)
{
	EMP_st *temp = *ptr;
	while(temp != 0)
	{
		if(cmpDate(temp->doj,temp->next->doj))
		{
			swap(temp,temp->next);
		}
		temp = temp->next;
	}
}


void addEmployee(EMP_st  **ptr, DATE_st *dptr, char *name,float *sal, uint16_t *id)
{
	//Initialize new node
	EMP_st *temp = (EMP_st *)calloc(1,sizeof(EMP_st));
	temp->doj = dptr;
	temp->empID = *id;
	strcpy(temp->name,name);
	temp->salary = *sal;

	if(*ptr == NULL)//If first node then all the begining
	{
		*ptr = temp;
	}
	else
	{
		temp->next = *ptr;
		*ptr = temp;
	}

}

void display(EMP_st *p)
{
	EMP_st *temp = p;
	while(temp != 0)
	{
		printf("Emp Id:%d\n", temp->empID);
		printf("Name: %s\n",temp->name);
		printf("D.O.J: %d/%d/%d\n",temp->doj->day,temp->doj->month,temp->doj->year);
		printf("Salary: %f\n",temp->salary);
		printf("*********************************\n");
		temp = temp->next;
	}
}



int cmpDate(DATE_st *date1, DATE_st *date2)
{
	if(date1->year < date2->year)	return 1;
	if(date1->year > date2->year)	return -1;
	if(date1->month < date2->month)	return 1;
	if(date1->month > date2->month)	return -1;
	if(date1->day < date2->day)	return 1;
	if(date1->day > date2->day)	return -1;
	return 0;
}
