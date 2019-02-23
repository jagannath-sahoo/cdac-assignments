/*
 * Q2. String Display and In reverser Mode using Recursion.
 * */

#include<stdio.h>
#include<string.h>

char displayStr(char str[], int startPos);
char reverserDisplayStr(char str[], int endPos);

int main()
{
	char str1[] = "Hello World";
	printf("String in Forward Order\n");
	displayStr(str1,0);
	printf("\nString in Reverse Order\n");
	reverserDisplayStr(str1,strlen(str1));
	return 0;
}

char displayStr(char str[], int startPos)
{
	if(str[startPos] == 0)
	       return 0;
	printf("%c\t",str[startPos]);
	displayStr(str,startPos+1);	
}


char reverserDisplayStr(char str[], int endPos)
{
	//printf("\n%s\n",str);
	if( endPos <= 0)
		return 0;
	printf("%c\t",str[endPos-1]);
	reverserDisplayStr(str,endPos-1);
}
