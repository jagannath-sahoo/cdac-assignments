/*
 *q1 checking endianness of sysytem
 *
 * */
#include<stdio.h>
int main ()
{
	int x=0x11223344;
	char *p;
	p= (char*) &x;
	printf("%x",*p);
	
	//printf("Hex = %x",*p);
	printf("starting = %p,Data = %x\n", p, *p);
	printf("Ending Address = %p,Data = %x\n",p+3,*(p+3));
        if(*p == 0x44)
	{
		printf("The sysytem is little endian ");
	}
	else 
		printf("The system is Big Endian");

	return 0;
}
