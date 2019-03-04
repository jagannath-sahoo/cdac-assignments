#include<stdio.h>
int main(){
	char *b="cdac-acts"; // storage is 
			// string literal pool
			// strings are by default
			// read only.

	char *c="Cdac-acts";
	printf("*b=%c\n", *b);
	
	printf("b[0]=%c\n", b[0]);
	printf("b[1]=%c\n", b[1]);
	
	printf("b=%s\n", b);// cdac-acts

	//*b='C';
	
	printf("b=%p\n",b); 
	printf("c=%p\n",c); 

	
	return 0;
}
