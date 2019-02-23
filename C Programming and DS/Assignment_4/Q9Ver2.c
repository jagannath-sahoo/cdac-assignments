/*Q9. Find power of n*/

#include<stdio.h>


long int find(long int b, long int exp);

//long int res = 1;
int main()
{
	long int base, expo, result = 1;
	printf("Enter base:\n");

	scanf("%ld",&base);
        printf("Enter Exponent\n");
	scanf("%ld",&expo);
	printf("Result = %ld\n",find(base,expo));
	return 0;
}


long int find(long int b, long int exp)
{
	if(exp == 0)
		return 1;
	else
		return (b * find(b, exp - 1));
		//return(res);
}
