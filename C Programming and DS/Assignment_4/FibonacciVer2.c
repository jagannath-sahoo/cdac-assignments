/*
 * Q6. Fibonacci Series using Recursion
 * */

#include<stdio.h>

int fiboSeries(int n);

int main()
{
        int n;
        printf("Enter the Number of terms for Fibonacci Series\n");
        scanf("%d",&n);



        printf("**************\n");
  	
	printf("%d,",fiboSeries(n));
        printf("\n");
        return 0;
}

int fiboSeries(int n)
{
	if(n == 1)
		return 1;
	else if( n == 0)
		return 0;
	else
		//printf("%d\t",n);
		return(fiboSeries(n-1) + fiboSeries(n-2));
}
