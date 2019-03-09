/*
 * Q10. Convert the string in a.b.c.d format into 32 bit unsigned integer
 * */

#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
#include<string.h>
#include<math.h>

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int main()
{
	char str[] = "11000100.01011001.00101001.01101111";
	uint32_t number = 0;
	//char *token = strtok(str,".");
	for(int i = 8; i>= 0; i--)
	{
		//printf("%d\n",str[i] -'0');
		if(str[i] != '.')
		printf("i = %d=>%d\n",i,str[i] -'0');
		//	number = number | ((str[i] - '0') << i);
		//printf("===>%lld\n",convertDecimalToBinary(number));
	}
	
	return 0;
}

