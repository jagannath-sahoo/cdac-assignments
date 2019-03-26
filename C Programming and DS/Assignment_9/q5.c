#include<stdio.h>

struct A
{
	int x;
	//char *str; 
	char str[20];
};

void main()
{

	struct A a1 = {101,"abc"},a2;
	printf("%d %s\n",a1.x,a1.str);
        a1.x=10;
	a2 = a1; //shallow copy or deep copy?

	//a1.str[]="hello"; //works?will work only when char* str is used.
	printf("Enter new values for structure\n");
	printf(" Value:String\n");
	scanf("%d %s",&a1.x,a1.str); //works?
	
	printf("The values of a1 structure are:\n");
	printf("%d %s\n",a1.x,a1.str);
	printf("The values of a2 structure are:\n");
	printf("%d %s\n",a2.x,a2.str);
}
