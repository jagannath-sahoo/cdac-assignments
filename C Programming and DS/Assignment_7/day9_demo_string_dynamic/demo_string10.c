#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

int main(){
	
	char *b;
	printf("enter first name\n");
	scanf("%s", b);  // abc
	
	int size=0;
	size = strlen(b);

	char *p;
	p=(char *)malloc(size+1);
	strcpy(p,b);
	

	printf("p=%s\n",p); // "abc"
	printf("b=%s\n", b); // abc
	b=NULL;
	free(p);
	return 0;

}
