/*Q3. Find Sum of n numbers
 *
 *
 * */

#include<stdio.h>
int temp, sumR= 0;

int sum(int n);

int main()
{
	int num;
	printf("Enter no. of terms\n");
	scanf("%d",&num);//3
	printf("Sum of Numbers %d\n",sum(num));
	return 0;
}

int sum(int n)//2
{
	int a;
	if(n < 1)
		return 0;
	printf("Enter a no.\n");
	scanf("%d",&a);
	sumR= sumR + a + sum(n-1);
	return sumR;
	//return (sum(n-1));
	
}
