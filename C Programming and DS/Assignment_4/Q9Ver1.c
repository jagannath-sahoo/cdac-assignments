/*Q9. Find power of n*/

#include<stdio.h>


long int find(long int b, long int exp);


int main()
{
	long int base, expo, result = 1;
	printf("Enter base:\n");

	scanf("%ld",&base);
        printf("Enter Exponent\n");
	scanf("%ld",&expo);
	
	for(int i = 0;i<expo;i++)
	{
	result = base * result;
	
	}

	printf("Result = %ld\n",result);

	return 0;
}

