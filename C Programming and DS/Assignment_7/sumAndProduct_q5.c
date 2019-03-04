/*
 * Q5. Write a single function to return sum, product of two no.s
 *
 * */


#include<stdio.h>

/*
 *	sum and multiplication using single function
 *	x: fist val
 *	y: second val
 *	op: + or *
 *	return: results
 * 	
 * */
float sumPro(float x,char op, float y);


int main()
{
	printf("Sum of %f and %f is %f\n",2.3,4.5,sumPro(2.3,'+',4.5));
	printf("Product of %f and %f is %f\n",2.3,4.5,sumPro(2.3,'*',4.5));
	return 0;
}
float sumPro(float x, char op, float y)
{
	if (op == '+')
		return (x+y);
	if (op == '*')
		return (x*y);
	return 0;
}

