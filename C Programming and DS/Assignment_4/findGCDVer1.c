/*
 *Q5. Find GCD
 * */
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
	printf("GCD = %d\n",GCD);
	return 0;
}
