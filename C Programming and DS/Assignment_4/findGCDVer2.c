/*Q5. Find GCD using recursion
 * */
#include<stdio.h>


int GCD(int x, int y);

int main(){
	int a, b;
	printf("Enter Two numbers:\n");
	scanf("%d %d",&a,&b);

	printf("\nGCD = %d\n",GCD(a,b));
	return 0;
}


int GCD(int x, int y)
{
	if(y != 0)
		return GCD(y, x%y);
	else
		return x;
}
