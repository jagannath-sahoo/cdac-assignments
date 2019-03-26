#include<stdio.h>
#include<stddef.h>

typedef struct stud
		{
			char name[20];
			int rollno;
			int marks[5];
		}info;
int main()
{
	
	
	char *subjects[5]={"English","Maths","Physics","Biology","Chemistry"};
	info stuarr[3];
	info s1[3];
	info *p=s1;
	int i,j,w,q,r,t;
	for(i=0;i<3;i++)
	{
		printf("Enter the data for student:%d\n",i+1);
		printf("Enter the student name\n");
		scanf("%s",stuarr[i].name);
		printf("Enter the student roll no\n");
		scanf("%d",&stuarr[i].rollno);
		printf("Enter the student marks\n");
		for(j=0;j<5;j++)
		{	
			printf("Enter the marks of the student for:%d:%s\n",j+1,subjects[j]);
			scanf("%d",&stuarr[i].marks[j]);
	
		}
	}
	s1[0]=stuarr[0];
	s1[1]=stuarr[1];
	s1[2]=stuarr[2];

	for(i=0;i<3;i++)
	{
		printf("Data of student:%d is:\n",i+1);
		printf("Name:%s\n roll no:%d\n",stuarr[i].name,stuarr[i].rollno);
		for (j=0;j<5;j++)
			printf("%s:%d\n",subjects[j],stuarr[i].marks[j]);
	}
	printf("Address of Variable S1 is:%p\n",p);
	printf("Element of structure s1 are:\n");
	printf("p->name:%s\n p->roll no:%d\n",p->name,p->rollno); 
	{
			 int t=0;
		printf("total marks of student name %s\n",(p+i)->name);
		 for(j=0;j<5;j++)
	 	 {
			 t+=stuarr[i].marks[j];
		 }
		 printf("Total=%d\n",t);

	}


}
