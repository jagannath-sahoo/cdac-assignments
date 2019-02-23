/*
 * Q4. Factorial using recursion
 * */

#include<stdio.h>

int fact(int);


int main()
{
	int n1;
	//int fact = 1;
	printf("Enter a number to find out factorial\n");
	scanf("%d",&n1);

	printf("Factorial: %d\n", fact(n1)); 
	return 0;
}


int fact(int a)
{
	int factorial;
	if(a>1)
		factorial=a*fact(a-1);
	else
		factorial=1;
}	
