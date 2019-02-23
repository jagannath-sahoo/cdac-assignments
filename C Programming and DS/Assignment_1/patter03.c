#include<stdio.h>

int main(){
	int i,j,k,l;

	for(i=1; i<=5; i++)
	{
		for(j=5; j>i; j--)
		{
			printf(" ");
		}
		for(l=1; l<(2*i); l++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
