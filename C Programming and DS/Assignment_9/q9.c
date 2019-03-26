#include<stdio.h>

union A
	{
		int x;
		float y;
		double z;
		int arr[2];
	}a1;

union B
	{
		int x;
		short int y;
		char ch;
		char carr[4];
	}b1;

int main()

{
	union A a1;
	union B b1;
	int i;
	a1.y=6.25f;

	printf("x=%x\n",a1.x);
	a1.z=0.15625;
	printf("%x %x\n",a1.arr[1],a1.arr[0]);
	b1.x=0x41424344;

	printf("b1.y=%ld\t b1.ch=%ld",sizeof(b1.y),sizeof(b1.ch));
	printf("Enter the characters of carr array\n");
	for(i=0;i<4;i++)
	{
		scanf("%s",b1.carr[i]);
	}
	printf("Display the characters in b1.carr\n");
	for(int k=0;k<4;k++)
	{
		printf("%c\n",b1.(carr+k));
	}
	printf("b1.x=%d ",b1.x);
}

