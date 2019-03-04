#include<stdio.h>
#include<stdlib.h>

int main(){
	//int arr[]={10,20,30,40,50};
	//int arr[5];
	//
	
	int *p;

	p=(int *)malloc(sizeof(int)*5);

	printf("p=%p\n", p);  // 2000

	*p=10;  // *(p+0)=10   or p[0]=10;
	p[1]=20;
	p[2]=30;
	*(p+3)=40;
	p[4]=50;

	for(int i=0;i<5;i++){
		printf(" %d ", p[i]);
	}

	printf("\n");

	free(p);


}


