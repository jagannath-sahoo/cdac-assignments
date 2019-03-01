/*
 * Q6. WAP to Test arithmetic operation on void pointers.
 * 
 * */

#include<stdio.h>

int main()
{
	int iVar = 67;
	void *ptr;
	printf("Size of ptr: %lu\n",sizeof(ptr));// size of ptr = 8 bytes
        ptr = (int *) &iVar;
	//printf("Size of ptr: %lu",sizeof(ptr));
	printf("Addr of ptr: %lu\n",ptr);//Addition is possible on GCC GNU
	printf("Add of void: %lu\n", ptr + iVar);
	return 0;
}
