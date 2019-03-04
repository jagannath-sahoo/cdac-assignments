/*
 *Q2. Try register storage class for local, global variables. Can we get
address of register variable
 * */
#include<stdio.h>

register int j=33; 


int main()
{
	register int  a=34;
	int *p,*q;
	p=&j;
	q=&a;
	printf("Address of global register j is %p\n",p);//address of global register can not be accessed
	printf("Address of local register a is %p",q);//Address of local register can not be accessed
	return 0;
}
