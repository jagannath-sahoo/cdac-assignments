/*
 * Q6. Whats wrong in this code, any fixes to the problem?
	int* test(int x)
	{
		int y=x*x;
		return &y;
	}
 * */

#include<stdio.h>

int test(int *x)
{
	//int y=x*x;//Must not return the local address of local variable of function
	//return &y;
	*x = *x * *x;
	return *x;
}

int main()
{
	int y = 5;
	printf("Multiplication: %d",test(&y));
	return 0;
}
