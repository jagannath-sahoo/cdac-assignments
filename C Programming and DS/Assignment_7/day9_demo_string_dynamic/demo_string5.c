#include<stdio.h>
#include<stdio_ext.h>
int main(){
	
	char name[]="cdac-acts";
	char *b;
	char *c="cdac-acts";
	
	printf("c=%p\n", c); // 1000
	printf("name=%p\n", name); // 7000
	
	printf("c=%s\n", c); // access to string literal pool
	printf("name=%s\n", name); // access the array content

	//*c='C'; // not allowed, since read only

	*name='C';
	printf("name=%s\n", name);
	
	printf("*c=%c\n", *c);
	c++;
	printf("*c=%c\n", *c);

	printf("*name=%c\n", *name);
	name++;
	printf("*name=%c\n", *name);

	return 0;

}
