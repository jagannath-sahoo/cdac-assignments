/*
 *
 * Q4. Calculate GCD and LCM of two numbers
 */

#include<stdio.h>

int main(){
	int a, b, GCD;
	printf("Enter Two numbers:\n");
	scanf("%d %d",&a,&b);

	for(int i = 1; i <= a && i <= b;i++)
	{
		if(((a%i) == 0) && ((b%i) == 0))
		{
			GCD = i;
		}
	}
	printf("LCM = %d\nGCD = %d",(a*b)/GCD,GCD);
	return 0;
}
