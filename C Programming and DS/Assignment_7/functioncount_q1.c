/*Q1. Write a program to find how many times a function is being called
 * 
 **/
#include<stdio.h>
int call();
int main()
{
 call();
 call();
 call();
 call();
 call();
 printf("No. of Funtion made call=%d times\n",call());
}


int call ()
{
	static int count =0;
	count ++;
	return count;
}
