//Assingment 5 q.1
//reverse elements of an array in memory
#include<stdio.h>


/*
 * Swap two numbers 
 * params x: address of x
 * 	  y: address of y
 * return  : void
 * */
void swapWithXor(int *x,int *y);

int main()
{

	int i,n,arr[100];
	printf("enter no. of elements to be enter\n");
	scanf("%d",&n);
	printf("Enter Numbers\n");
	//int a=5,b=6;
	//swapWithXor(&a,&b);
	//printf("a=%d::b=%d\n",a,b);
  	for(i = 0; i<n ; i++)
   	{
    		scanf("%d",&arr[i]);
    	}
    	for(i = 0;i < n/2; i++)
	{
		swapWithXor((arr+i),(arr+((n-1)-i)));
	}
	for(i = 0;i < n;i++)
        {
                printf("%d\t",arr[i]);
        }

	return 0;
}

void swapWithXor(int *x, int *y)
{
//	printf("With Xor\n");

	//printf("values\n %d :: %d \n",x,y);
	*x = (*x ^ *y), *y = *x ^ *y, *x = *x ^ *y;
	//printf("Swaped values\n %d :: %d \n",x,y);
}
