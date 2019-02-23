/*Q8. Find Perfect or not*/

#include<stdio.h>

int main()
{
	int n,sum = 0;

	printf("Enter a number to check\n");
	scanf("%d",&n);

	for(int i = 1; i <= (n-1); i++)
	{
		if ( (n%i) == 0)
		{
			sum +=i;
		}
	}
	if (sum == n)
		printf("Perfect No. Found!\n");
	else
		printf("Not Perfect No.\n");

	return 0;
}
