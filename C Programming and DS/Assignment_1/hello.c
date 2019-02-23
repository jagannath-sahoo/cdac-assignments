
#include<stdio.h>

int main()
{
	int i=1, j=1;
	for( ; j; printf("i=%d, j=%d",i,j))
		j=i++ <=5;
	return 0;
}
