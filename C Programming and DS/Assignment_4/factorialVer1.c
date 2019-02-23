/*
 * Q4. Find factorial of n Ver1.c
 * */

#include<stdio.h>

int main()
{
	int num,fact = 1, temp;

	printf("Enter a no.\n");
	scanf("%d",&num);
	temp = num;


	while(temp != 0)
	{
		fact = fact * temp;
		temp = temp -1;
	}	
	printf("Factorial: %d",fact);
	return 0;
}
