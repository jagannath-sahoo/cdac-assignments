/*
 * Q4. Find biggest of 3 no.s using conditional operator
 * */

#include<stdio.h>

int main()
{
	int a,b,c,temp;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);

	temp  = ((a > b) && (a > c))? a  : ((b > c)? b : c);
	printf("Bigest One: %d\n",temp);

	return 0;
}

