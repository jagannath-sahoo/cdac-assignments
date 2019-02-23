/*
 * Q9. Resursive sum
 */


#include<stdio.h>


/*
 * Count no. of digits in a number
 */
int countDigit(int );
/*
 * Find Sum
 */
int findSum(int );



int main()
{
	int lastSum = 0,currSum = 0, num1;
	printf("Enter A number\n");
	scanf("%d",&num1);

	lastSum = findSum(num1);
	currSum = findSum(lastSum);
	while(lastSum != currSum)
	{
		lastSum = currSum;
		currSum = findSum(lastSum);
	}
	printf("Resursive Sum = %d\n",currSum);
	//printf("%d\n",findSum(findSum(findSum(findSum(9785)))));
	return 0;
}


int countDigit(int n)
{
	int count = 0;
	while(n!=0)
	{
		count++;
		n = n/10;
	}
	return count;
}

int findSum(int n)
{
	int sum = 0, temp;
	int cd=countDigit(n);
	for(int i=1; i<=cd; i++)
	{
		temp=n%10;
		sum=sum+temp;
		n=n/10;
	}
	return sum;

}
