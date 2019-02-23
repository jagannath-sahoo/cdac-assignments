/* Q10. Find No. of digits in a number
 * */


#include<stdio.h>

int findNoOfDigits(int n);

int main()
{
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	printf("No. of Digits: %d\n",findNoOfDigits(num));
	
	
	return 0;
}

int findNoOfDigits(int n)
{
	int count = 0;
	while(n!=0)
	{
		count++;
		n /= 10; 
	}
	return count;
}
