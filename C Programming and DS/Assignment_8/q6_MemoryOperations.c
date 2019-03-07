/*
 * Q6. Explore the following functions used for raw memory operations.
memcpy, memcmp, memset, bzero
 * */
#include<stdio.h>
#include<string.h>


int main()
{
	char str1[] = "Hello World!";
	char strBuf[16];
	memcpy(strBuf,str1,strlen(str1)+1);
	//Copy str1 to strBuf
	int cmp = memcmp(strBuf,str1,strlen(str1)+1);
	//compare strBuf, with str1, and returns int
	printf("memcopy(strbuf,str1) : %s\n",strBuf);
	
	printf("memcpy(strBuf,str1,strlen(str1)+1): %d",cmp);

	memset(strBuf,'c',16);
	printf("memcopy(strbuf,str1) : %s\n",strBuf);
	bzero(strBuf,16);
	printf("strBuf: %s\n",strBuf);
	return 0;
}

