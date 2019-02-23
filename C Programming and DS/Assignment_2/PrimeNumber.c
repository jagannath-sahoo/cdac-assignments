/*
 *Q.5 Prime Number
 */
#include<stdio.h>

int main()
{
	int n;

	printf("Enter any number - ");
	scanf("%d",&n);
	for(int i=2; i<n; i++)
	{
		if((n % i) == 0)
		{
			printf("Not a Prime No.");
			return 0;
		}
		
	}
	printf("Prime No.");
	return 0;
}

