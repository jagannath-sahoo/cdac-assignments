/*
 * Q8. Avgerage Sum, max and min from int array
*/
#include<stdio.h>

 int main()
{
	int arr1[5],sum=0,max=0,min=0;
	float avg = 0.0;
	for(int i=0;i<5;i++)
	{
		printf("Enter a no\n");
		scanf("%d",&arr1[i]);
	}
	
	max = min = arr1[0];

	for(int i = 0; i < 5; i++)
	{
		sum = sum + arr1[i];
		if(max < arr1[i])
		{
			max = arr1[i];
		}
		if(min > arr1[i])
		{
			min = arr1[i];
		}
	}
	avg = sum / 5.0;


	printf("Average:  = %f, Sum = %d, Max = %d, Min = %d\n",avg,sum,max,min);
        return 0;	
}
