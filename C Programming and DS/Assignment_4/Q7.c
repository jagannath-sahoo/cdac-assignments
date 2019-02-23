/* Format conversion Decimal, Binary, Octal*/

#include<stdio.h>

int decToBin(int n);
int decToOct(int n);
//void oct(int n);

int main()
{

	int num;
	printf("Enter a no.\n");
	scanf("%d", &num);
	printf("Binary:%d \n",decToBin(num));
	printf("Octal: %d \n",decToOct(num));
	return 0;
}


int decToBin(int n)
{
	if(n == 0)
		return 0;
	else
		return(n % 2 + 10 * decToBin(n / 2));

}

int decToOct(int n)
{
	if (n == 0)
		return 0;
	else
		return(n % 8 + 10 * decToOct(n / 8));
}
