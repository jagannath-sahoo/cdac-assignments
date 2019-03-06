/*
 * Q4. Study about various functions which can convert from string to
different types
atoi, atol, atoll, atof
strtoimax, strtol, strtoul, strtof, strtod etc
man -k strto – for more listing
 * */

#include<stdio.h>
#include<string.h>

int main()
{
	int str1[100];
	strcpy(str1,"9882");
	printf("Conveot String to integer %ld",atoi(str1));
	return 0;
}
