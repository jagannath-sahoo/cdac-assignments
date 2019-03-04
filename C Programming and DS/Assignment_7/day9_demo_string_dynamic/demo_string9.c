#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

int main(){
	
	char *b;
	printf("enter first name\n");
	scanf("%s", b);  // abc
	
	int size=0;
	size = strlen(b);

	char name[size+1];
	strcpy(name,b);
	

	printf("name=%s\n",name); // "abc"
	printf("b=%s\n", b); // abc
	b=NULL;
	return 0;

}
