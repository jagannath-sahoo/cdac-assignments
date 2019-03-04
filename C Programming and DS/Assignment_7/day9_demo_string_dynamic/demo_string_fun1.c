#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>

int mystrlen(char *);
int main(){
	
	char name[]="abc";
	int len;
	len=mystrlen(name);
	printf("len=%d\n", len);
	return 0;

}
int mystrlen(char *p){
	printf("p=%s\n", p);
	int count=0;
	while(*p!='\0'){
		count++;
		p++;
	}

	return count;

}

