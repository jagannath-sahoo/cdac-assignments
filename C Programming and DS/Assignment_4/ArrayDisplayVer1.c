/*
 * Q1. Display array elements and also in reverse display order
 * */

#include<stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	
	printf("Array Elements:\n");
	for(int j = 0; j < 5; j++)
	{
		printf("%d\t",arr[j]);
	}

	printf("\nArray Elements in Reverse Order: \n");
	for(int i = 4; i >= 0; i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
