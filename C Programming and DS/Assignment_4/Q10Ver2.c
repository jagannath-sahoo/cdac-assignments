/* Q10. Find No. of digits in a number
 * */


#include<stdio.h>

int find(int n);
int count = 0;

int main()
{
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	
	printf("No. of Digits: %d\n",find(num));
	return 0;
}

int find(int n)
{
	if(n != 0)
	{
		count++;
		find(n/10);
		return (count);
	}
	else
	{
		return count;
	}
}


