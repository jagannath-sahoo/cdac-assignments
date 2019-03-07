/*
 * Q2. perform the following operations using sprintf
a) concatenation of two strings
b) copying one string to other
c) length of a string
 *
 * */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	char str1[] = "Hello";
	char str2[] = "World!";
	char str3[32];
	char buff[64];
	sprintf(buff,"Concatenate string: %s %s\n",str1,str2);	
	printf("%s",buff);
	memset(buff, 0, 64);
        sprintf(buff,"Copying string: %s\n",str1);
        printf("%s",buff);
        memset(buff, 0, 64);
        sprintf(buff,"String Length: %d\n",sprintf(str3,"%s",str1));

        printf("%s",buff);
        memset(buff, 0, 64);
	

	return 0;
}
