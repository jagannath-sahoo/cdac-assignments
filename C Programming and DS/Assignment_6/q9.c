/*
 *q9 Differentiate between
const int * p;
int const * p
int * const p = &x;
const int * const p = &x;
Try *p=20, p++, (*p)++, p=&y in each case
 * */
#include<stdio.h>
int main ()
{
	int const x=12;
	int y=34;
	const int *p;
//	int * const p=&x;
//	const int * const p=&x;
//	*p=20;
	/*
	 * const int *p; assignment of read only location
	 * const int * const ;assignment of read-only location ‘*p’
	 * */
	printf("*p=%u\n",*p);
//	p++;
	/*
	 * int * const p=&x; increment of read-only variable 'p'
	 * */
	printf("p++=%u\n",p);
//	(*p)++;
//	printf("(*p)++=%u\n",(*p)++);
	p=&y;
	printf("p=&y: p= %u\n",p);
return 0;
}

