#!/bin/sh
# create File

echo "
/*$1*/
#include<stdio.h>

#ifdef DEBUG
# define DEBUG_PRINT(x) printf(x);
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

int main()
{
	return 0;
}" >> $2.c

