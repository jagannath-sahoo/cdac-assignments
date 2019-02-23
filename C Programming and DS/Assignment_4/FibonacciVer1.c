/*
 * Q6. Fibonacci Series
 * */

#include<stdio.h>

int main()
{
        int n, t1 = 0, t2 = 1, nextTerm = 0;
        printf("Enter the Number of terms for Fibonacci Series\n");
        scanf("%d",&n);



	printf("**************\n");
        for(int i = 1; i <= n; i++)
        {
                printf("%d\t",t1);
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
        }
	printf("\n");
        return 0;
}
