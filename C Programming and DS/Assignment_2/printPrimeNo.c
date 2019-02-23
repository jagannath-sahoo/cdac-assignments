/*
 * Q10. Print list of prime no.s
 * */

#include<stdio.h>

int main()
{
	int startRange,endRange,count;
	printf("Enter the range for list of prime no.\n");
	scanf("%d%d",&startRange, &endRange);

	for(int num = startRange; num <= endRange; num++)
	{
		count = 0;
		for(int j = 2; j <= (num/2);j++)
		{
			if (num%j == 0)
			{
				count++;
				break;
			}
					
		}
		if(count == 0 && num != 1)
		{
			printf("%d,", num);
		}
	
	}
	printf("\n");
	return 0;
}
