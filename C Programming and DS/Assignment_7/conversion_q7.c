/*
 *Q7. Try conversions between int*, const int* while passing parameters to
functions
 * */
#include<stdio.h>
void test (const int*);
void test2 (int *);
int main ()
{
	int *p;
	int x=10;
	const int y=20;
	p=&x;
	const int *q;
	q=&y;
	test(q);
	test2(p);
	return 0;	
}


void test(const int* a)
{
	printf("Pointer is %d\n",*a);	
}

void test2(int* w)
{
	printf("pointer is %d\n",*w);
}
