#include<stdio.h>
int main(){
	char *b="cdac-acts"; // storage is 
			// string literal pool
			// strings are by default
			// read only.

	char *c;
	c=b;	

	printf("b=%p\n",b); // 1000
	printf("c=%p\n",c);  // 1000

	printf("*(c+1)=%c\n", *(c+1)); // d
	printf("c[1]=%c\n", c[1]); //  d
	printf("c=%s\n", c); // "cdac-acts"

	
	return 0;
}
