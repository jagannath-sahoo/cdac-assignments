/*
 * Q7. Armstrong number
 * */

#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, armNum = 0, temp;
	
	printf("Enter to the number to verify\n");
	scanf("%d",&n);
	m = n;
	while(n != 0)
	{
		temp = n % 10;
		//printf("Temp: %d\n",temp);
		armNum = armNum + temp*temp*temp;
		n /= 10;
	}	
	if( m == armNum)
	{
		printf("Armstrong Number\n");
	}
	else
	{
		printf("Not Armstrong Number\n");
	}

	return 0;
}
