/*
 *q2 addintion of 2 arrays 
 * */
#include<stdio.h>
int main()
{
	int arr1[100],arr2[100], n;
	printf("Enter the Array size \n");
	scanf("%d",&n);
	printf("Enter numbers of array");
	for(int i=0;i<n;i++)
		{
			scanf("%d",(arr1+i));
			
		}	
	printf("Enter the numbers for 2nd array");
	for(int j=0;j<n;j++)
	{
		scanf("%d",(arr2+j));
	
	}
	for(int i=0;i<n;i++)
	{
		printf("arr1[%d] + arr2[%d] = %d\n",i,i,(*(arr1+i) + *(arr2+i)));
	
	}
	return 0;
}
