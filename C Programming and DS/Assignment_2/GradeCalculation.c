/*
 *Q.3 Grade Calculation
 */
#include<stdio.h>

int main()
{
	int n, max, omarks, sum=0;

	printf("Enter  total subjects - ");
	scanf("%d",&n);
	printf("Enter Maximum Marks - ");
	scanf("%d",&max);
	for(int i=1; i<=n; i++)
	{
		printf("Enter %d marks - ",i);
		scanf("%d",&omarks);
		sum=sum+omarks;
	}
	printf("%0.4f\n",((sum*100)/(n*(float)max)));
	return 0;

}
