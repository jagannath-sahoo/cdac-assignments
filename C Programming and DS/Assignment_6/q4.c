/*
 * Q4. Evaluate Expressions
 * */

#include<stdio.h>

#define PRINTF(x,y) printf(x,y);

void display(int *cp,int size)
{
	for(int i = 0 ;i < size; i++)
	{		
		printf("%d =>>Address %p \n----------------\n",*(cp+i) ,(cp+i));
	}
}

int main()
{
	int a[5] = {10, 20, 30, 40, 50 };
	int *p=a, *q=*(&a+1) - 1;
	display(a,5);
	printf("&a = %p\n",&a);
	printf("&a+1 = %p\n",&a+1);
	//printf("*((&a+1)-1) = %d\n",*((&a+1)-1)++);
	printf("*q++ = %d\n",*q++);
	printf("*++p = %d\n",*++p);
	printf("(*p)++ = %d\n",*(p)++);
	printf("++(*p) = %d\n",++(*p));
	printf("++*p = %d\n",++*p);
	printf("*(p++) = %d\n",*(p++));
	printf("*(++p) = %d\n",*(++p));
	printf("*q-- = %d\n",*q--);
	printf("*--q = %d\n",*--q);
	printf("--(*q) = %d\n",--(*q));
	printf("--*q = %d\n",--*q);
	printf("(*q)-- = %d\n",(*q)--);
	printf("*(q--) = %d\n",*(q--));
	printf("*(--q) = %d\n",*(--q));
	return 0;
}
