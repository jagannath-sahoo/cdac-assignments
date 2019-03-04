#include<stdio.h>
#include<stdlib.h>

int main(){
	
	// int x=10;
	
	int *p;

	p=(int *)malloc(sizeof(int));

	*p=10;

	printf("*p=%d\n", *p); // 10
	
	printf("p=%p\n", p); // 4000

	p=(int *)realloc(p, sizeof(int)*2);
	
	printf("p=%p\n", p); //


	//free(p);


}


