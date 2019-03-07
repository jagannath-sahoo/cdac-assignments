/*
 *
 * Q2. Given the address of a member variable in a structure find the base
address of it.
For eg:- struct A {
int x;
double y;
float z;
char ch;
}a1;
given address of any member x,y,z or ch , find address(base) of a1.
 * */

#include<stdio.h>
#include<stdlib.h>


int main()
{
	struct A {
	int x;
	double y;
	float z;
	char ch;
	}a1;
	a1.x = 12;
        a1.y = 2.12312;
	a1.z = 23.21;
	a1.ch = 'A';
	printf("Address of a1.x: %p\n", &a1.x);
	printf("Address of a1.y: %p\n", &a1.y);
	printf("Address of a1.z: %p\n", &a1.z);
	printf("Address of a1.ch: %p\n", &a1.ch);
	return 0;
}

