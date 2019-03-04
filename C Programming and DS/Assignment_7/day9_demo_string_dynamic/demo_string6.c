#include<stdio.h>
#include<stdio_ext.h>
int main(){
	
	char name[]="cdac-acts";
	char *b;

	b=name;
	printf("cdac-acts");
	printf("b=%s\n", b); // "cdac-acts"

	printf("*(b+1)=%c\n", *(b+1));// d

	*b='C';
	printf("b=%s\n", b); // "Cdac-acts"

	b++;
	printf("b=%s\n", b); // "dac-acts"

	printf("name=%p\n", name); // 7000
	

	return 0;

}
