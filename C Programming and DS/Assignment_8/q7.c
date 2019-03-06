#include<stdio.h>
#include<string.h>


int main()
{
	char str1[100] = "Hello World!";
	char str2[100];
	memcpy(str2,str1,sizeof(str2));
	printf("Str1 = %s \n Str2 = %s\n",str1,str2);
	return 0;
}
