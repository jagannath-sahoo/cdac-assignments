#include<stdio.h>
#include<stdio_ext.h>
int main(){
	
	char name[10];
	char *b;

	b=name;
	printf("enter first name\n");
	scanf("%s", b);  // abc

	printf("name=%s\n",name); // "abc"
	printf("b=%s\n",b); // "abc"

	return 0;

}
