/*
 *Q.1  Calculator
 */
#include<stdio.h>
//#include<stdlib.h>

int add(int , int);
int sub(int , int);
int mul(int , int);
int div(int , int);

int main()
{
	int a, b, loopCond = 1;
	int ch;
	while(loopCond){
	

	printf("**************************************************\n");
	printf(" 1-Addition\n 2-Substraction\n 3-Multiplication\n 4-Division\n 5-Exit\nYour Choice!!! \n");
	scanf("%d",&ch);
	
	if(ch == 5)
	{
		return 0;
	}
	printf("Enter First Number - ");
	scanf("%d",&a);
	printf("Enter second number - ");
	scanf("%d",&b);

	switch(ch)
	{
		case 1:
			printf("Result: %d\n",add(a,b));
			break;
		case 2:
			printf("Result: %d\n",sub(a,b));
			break;
		case 3:
			printf("Result: %d\n",mul(a,b));
			break;
		case 4:
			printf("Result: %d\n",div(a,b));
			break;
		case 5:
			loopCond = 0;
			break;	
		default:
			printf("Sorry^_^\n Invalid Option\n");
	}
	}
}


int add(int x, int y)
{
	return (x+y);
}
int sub(int x, int y)
{
	return (x-y);
}
int mul(int x, int y)
{
	return (x*y);
}
int div(int x, int y)
{
	if(y==0)
	{
		printf("ERROR! Divide by Zero Issue");
		return 0;
	}
	else
		return (x/y);
}

