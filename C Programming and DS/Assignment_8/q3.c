/*
 * Q3. Study the following functions
strncpy, strncat, strncmp, strcasecmp, strncasecmp, strchr, strrchr,strstr,
strtok, sprintf, snprintf, sscanf
 * */
#include<stdio.h>
#include<string.h>


int main()
{
	char str1[100] = "Hello";
	char str2[100] = "World";
	if(strcmp(str1,str2) == 0)
		printf("Equal\n");
	printf("strncat():%s\n",strncat(str2,str1,2));	
	printf("str1 < srt2 :%d\n",strncmp(str1,str2,2));
	printf("Compare strings byte by byte:%d\n",strcasecmp(str1,str2));
	printf("Compare strings byte by byte: %d\n",strncasecmp(str1,str2,2));
	printf("Address of 'e' in %s\n",strchr(str1,'e'));


	char str3[] = "$JN$cdac$pune";
	char *token =  strtok(str3,"$");
	while(token != 0)
	{
		printf("%s\n",token);
	        token = strtok(NULL,"$");
	}
	memset(str1,0,100);
	snprintf(str1,4,"%s",str2);
	printf("snprinf: %s\n",str1);
	memset(str1,0,100);
	int x=2,y=9;
	sscanf(str1,"%s%s%d%d","Hello","World",&x,&y);
	printf("str1:%s\n",str1);
	return 0;
}
