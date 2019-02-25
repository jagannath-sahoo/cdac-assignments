/*
 * Q2. Swaping of two numbers
 * */


#include<stdio.h>


void swapWithTemp(int, int);
void swapWithoutTemp(int,int);
void swapWithXor(int,int);


int main()
{
	int n1,n2;
	printf("Enter two Int type numbers\n");
	scanf("%d%d",&n1,&n2);
	
	printf("values\n %d :: %d \n",n1,n2);
	swapWithTemp(n1,n2);
	swapWithoutTemp(n1,n2);
	swapWithXor(n1,n2);
	return 0;
}


void swapWithTemp(int x, int y){
	printf("Swap With Temp\n");
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("Swaped values\n %d :: %d \n",x,y);
}

void swapWithoutTemp(int x, int y)
{
	printf("Swap without Temp\n");
	x = x + y;
	y = x - y;
	x = x - y;
	printf("Swaped values\n %d :: %d \n",x,y);
}

void swapWithXor(int x, int y)
{
	printf("With Xor\n");
	//printf("values\n %d :: %d \n",x,y);
	x = (x ^ y), y = x ^ y, x = x ^ y;	
	printf("Swaped values\n %d :: %d \n",x,y);
}
