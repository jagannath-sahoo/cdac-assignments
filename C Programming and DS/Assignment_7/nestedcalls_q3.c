/*
 *Try some nested calls sqrt(pow(2,abs(x))), putchar(toupper(ch)) etc
 * gcc -o nestedcalls_q3 nestedcalls_q3.c  -lm<for including math library>
 *
 **/
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
int main()
{
float x;
char ch;
	printf("Enter a number\n");
	scanf("%f",&x);
	printf("sqrt(pow(2,abs(x))) is %f\n",sqrt(pow(2,abs(x))));
	__fpurge(stdin);
	printf("Enter A character\n");
	scanf("%c",&ch);
	printf("putchar(toupper(ch)) is %c\n",putchar(toupper(ch)));	
	return 0;
}
