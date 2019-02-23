/*
 *
 * Q1: Swap two numbers without third variable
 * 
 * */

#include<stdio.h>
 

int main()
{
	int a,b;
	printf("Enter int type 1st no.\n");
	scanf("%d",&a);
	printf("Enter int type 2nd no.\n");
	scanf("%d",&b);

	a = a^b;
	b = a^b;
	a = a^b;

	printf("Swap: 1st:%d 2nd:%d",a,b);
	return 0;
}
