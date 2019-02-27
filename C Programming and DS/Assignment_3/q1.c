/* Q1. Pascal's triagle
 * */


#include<stdio.h>

int main()
{

	int row,coEff = 1; 

	printf("Enter number of rows: \n");
	scanf("%d",&row);
	for(int i = 0; i < row; i++)
	{
		for(int space = 1; space <= row - i; space++)
			printf("  ");

		for(int j = 0; j <= i;j++)
		{
			if((j == 0) || (i == 0))
			{
				coEff = 1;
			}
			else
			{
				coEff = coEff * (i - j + 1) / j;
			}
			printf("%4d",coEff);
		}
		printf("\n");
	}
	return 0;
}
