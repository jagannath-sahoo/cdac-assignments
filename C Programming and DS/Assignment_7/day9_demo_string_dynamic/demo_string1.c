#include<stdio.h>
int var1=20;
int main(){
	static int var2=30;
	int x=10;
	const int y=20;
	char *b="cdac-acts"; // storage is 
			// string literal pool
			// strings are by default
			// read only.
	char *c="cdac-acts";
	char *d;
	d=b;

	printf("cdac-acts");
	printf("&x=%u\n", &x);
	printf("&var1=%u\n", &var1);
	printf("b=%u\n", b); // 1000
	printf("&var2=%u\n", &var2);
	printf("&y=%u\n", &y);

	printf("*b=%c\n", *b);
	
	printf("b[0]=%c\n", b[0]);
	printf("b[1]=%c\n", b[1]);
	
	printf("b=%s\n", b);// cdac-acts
	//printf("*b=%s\n", *b); // 
	//printf("b=%c\n", b);// wrong result

	//*b='C';

	
	return 0;
}
