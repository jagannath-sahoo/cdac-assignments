/*Q8. Find np. 1s and 0s
 * */

#include<stdio.h>


void find(int n, int mask);
int count1s = 0, count0s = 0;

int xBit;


int main()
{
	int num;
	int maskVal = 31;
	printf("Enter a no.\n");
	scanf("%x",&num);
	find(num,maskVal);
	printf("1s = %d, 0s = %d\n",count1s, count0s);
	return 0;
}


void find(int n, int mask)
{
	if(mask <= 0)
		return;
	else
		xBit = n >> mask;
		if(xBit & 1)
			count1s++;
		else
			count0s++;
		find(n,mask - 1);
}
