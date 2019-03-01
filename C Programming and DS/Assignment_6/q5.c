/*
 * Q5. WAP to Convert from one type of pointer/address to other using void*.
 * */

#include<stdio.h>

int main()
{
	int iVar = 0x61626364;
	void *iptr = (int *) &iVar;
	printf("Size of iVar = %lu, Value iptr = %d\n",sizeof(*((int *)iptr)), *((int *)iptr));
	//Typecasting to char ptr and print	
	iptr = (char *) &iVar;
	printf("Size of iVar = %lu, Value iptr = %c\n",sizeof(*((char *)iptr)), *((char *)iptr));
	//Typecasting to float type ptr and print
	iptr = (float *) &iVar;
	printf("Size of iVar = %lu, Value iptr = %f\n",sizeof(*((float *)iptr)), *((float *)iptr));
	return 0;
}
