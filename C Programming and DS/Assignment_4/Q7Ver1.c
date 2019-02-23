/* Format conversion Decimal, Binary, Octal*/

#include<stdio.h>

void decToBin(int n);
void decToOct(int n);
//void oct(int n);

int main()
{
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	decToBin(num);
	printf("\n");
	decToOct(num);
	return 0;
}


void decToBin(int n)
{
	//for(int i = 0; i < 8;i++); 
	int q,r;
	int binArr[8] = {0};
	for(int i = 7; i >= 0;i--)
	{
		q = n / 2;
		r = n % 2;
		n = q;
		binArr[i] = r;
	}
	printf("Binary: 0b");
	for(int i = 0; i < 8; i++)
	{
		printf("%d",binArr[i]);
	}

}

void decToOct(int n)
{
	//for(int i = 0; i < 8;i++); 
	int q,r;
	int binArr[8] = {0};
	for(int i = 7; i >= 0;i--)
	{
		q = n / 8;
		r = n % 8;
		n = q;
		binArr[i] = r;
	}
	printf("Octal: 0o");
	for(int i = 0; i < 8; i++)
	{
		printf("%d",binArr[i]);
	}

}
