#include<stdio.h>
#include<string.h>

void swap(int *x,int *y)
{
	int temp;
	memcpy(&temp,x,sizeof(int));
        memcpy(x,y,sizeof(int));
        memcpy(y,&temp,sizeof(int));
}

int main()
{
	int x = 10;
	int y = 20;
	int temp;
	printf("%d::%d",x,y);
	swap(&x,&y);
	printf("%d::%d",x,y);
	return 0;
}
