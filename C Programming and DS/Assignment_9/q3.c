/* 
 *Q3. In the student structure created above modify marks member as an
array(array of 5 subjects), create an array of struct variables and do
some input,output operations.(Marks of ith student in jth subject etc).Find
the student wise totals, subject wise totals.
 * */

#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
	char name[20];
	int mark[5];
}STUDENT_t;

void updateMarks(int (*mrk)[5]);

int main()
{

	STUDENT_t s1;
	printf("Enter name: ");
	scanf("%[^\n]s",s1.name);// ;= {"Jagan"};
	updateMarks(&(s1.mark));
	STUDENT_t *p = &s1;
	
	printf("Name: %s\n",s1.name);	
//	printf("Marks: %d\n",(p->mark)[1]);		
	return 0;
}
void updateMarks(int (*mrk)[5])
{
	for(int i = 0; i < 5; i++)
	{
		printf("Enter marks for %dth subject: ", i+1);
		scanf("%d",mrk[i]);
	}	
}
