/*
 *q3 coeficient evaluation 
 * */
#include<stdio.h>

void Display(float *arr, int size );
int main()
{	float a[100], x[100], result = 0;
	int n;
	printf("Enter no. of coefients");
	scanf("%d",&n);
	printf("Enter coefients\n");
	for(int i=0;i < n;i++)
	{
		printf("Enter For a[%d]\n", i);
		scanf("%f",(a+i));
		if(i  != (n-1))
			{
				//printf(">>>%d\n",i);
				printf("Enter for x[%d]\n", i); 
				scanf("%f", (x+i));
			}
	}
	//Display(x, 10);
	
	for(int i = 0; i < n; i++)
	{
		result = result + (a[i] * x[n-2]);	
	}
	printf("Result= %f\n",result);



	return 0;
}

void Display(float *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("arr[%d] = %f\n",i,*(arr+i));
	}
}

