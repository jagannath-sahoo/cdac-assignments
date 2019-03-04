#include<stdio.h>
#include<stdio_ext.h>
int main(){
	
	char *b;
	int number;
	char ch;
	printf("enter a string\n");
	scanf("%s", b);
	printf("enter a char\n");
	__fpurge(stdin);
	scanf("%c", &ch);
	//__fpurge(stdin);
	printf("enter a number\n");
	scanf("%d", &number);

	
	printf("number=%d\n", number);
	printf("b=%s\n", b);
	printf("ch=%c\n", ch);
	return 0;
}
