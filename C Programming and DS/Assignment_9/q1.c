/* 
 * Q1. Create a structure for student/employee information with suitable
members and do the following
- Creating variables, input, output operations
- initialization(complete or partial) of variables
- create a pointer of struct type, and assign address of variable
- access members from the pointer using arrow operator
- calculate size of variable, offset of each member
- create alias for the structure type, pointer type using typedef
 * */

#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
	char name[20];
	char gender;
	int mark;
}STUDENT_t;



int main()
{
	STUDENT_t s1 = {"Jagannath Sahoo",'M',80};
	STUDENT_t s2;
	printf("Enter Name: ");
	scanf("%s",s2.name);
	__fpurge(stdin);
	printf("Gender: ");
	scanf("%c",&s2.gender);	
	__fpurge(stdin);
	printf("Marks: ");
	scanf("%d",&s2.mark);	
	__fpurge(stdin);
	printf("%s\n%c\n%d\n",s2.name,s2.gender,s2.mark);
	STUDENT_t s3 = {"Jaga",'M'};
	STUDENT_t s4 = s2;
	STUDENT_t *p = &s4;
	
	printf("Name: %s\n",p->name);	
	printf("Gender: %c\n",p->gender);	
	printf("Marks: %d\n",p->mark);	
	printf("Address of s1.name: %p\n",&s1.name);
	printf("Address of s1.mark: %p\n",&s1.gender);
	//printf("Offset of s1.gender: %x\n", (&s1.gender) - (&s1.name));	
	return 0;
}
