/*Q8. Find np. 1s and 0s
 * */

#include<stdio.h>

void find(int n);




int main()
{
	int num;
	int count1s = 0, count0s = 0;
	int maskVal = 31;
	printf("Enter a no.\n");
	scanf("%x",&num);
	find(num);
	return 0;
}

void find(int n)
{
	int xBit;
	int count1s = 0, count0s = 0;
	for(int c = 31; c>= 0; c--)
	{
		xBit = n >> c;
		if(xBit & 1)
			count1s++;
		else
			count0s++;
	}
	printf("1s = %d, 0s = %d\n",count1s, count0s);
}
