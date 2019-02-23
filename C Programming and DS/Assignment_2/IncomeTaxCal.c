/*
 *Q2. Income tax calculator
 * */

#include<stdio.h>


#define MIN_INCOME1 150001
#define MAX_INCOME1 300000
#define MIN_INCOME2 300001
#define MAX_INCOME2 500000
#define TAX_RATE1 0.1
#define TAX_RATE2 0.2
#define INVESTMENT 200000
#define TAXABLE_INCOME 150000


int main()
{
	double income,taxable_income, tax, invest;
	int ch;
	printf("Income Ammount: ");
	scanf("%lf",&income);
	printf("Any Investment if yes then Enter Ammount else Enter 0\n");
	scanf("%lf",&invest);
	printf("Are you senior citizen? Yes => 1 Or No => 0\n");
	scanf("%d",&ch);
	taxable_income = income - TAXABLE_INCOME;
	if(taxable_income <= 0)
	{
		printf("NO TAX\n");
	}
	else if((taxable_income >= MIN_INCOME1) && (taxable_income<MAX_INCOME1))
	{
		tax = (taxable_income - MIN_INCOME1)*TAX_RATE1;
	}
	else if((taxable_income >= MIN_INCOME2) && (taxable_income<MAX_INCOME2))
        {
                tax = (taxable_income - MIN_INCOME2)*TAX_RATE2;
        }
	else
		printf("Try Again\n");
	if(invest >= INVESTMENT)
	{
		tax = tax - (tax*0.1);
	}
	if(ch == 1)
	{
		tax = tax - (tax*0.2);
	}

	printf("\n***********\nTAX : %lf\n",tax);


	return 0;
}
