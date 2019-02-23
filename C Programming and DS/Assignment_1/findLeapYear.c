/* Q5. Find Leap Year */
#include<stdio.h>

int main(){
	int year, temp;

	printf("Enter any year - ");
	scanf("%d",&year);
	if((year%4)== 0)
		printf("The given year %d is a leap year\n",year);
	else
		printf("The given year %d is a not leap year\n",year);
	return 0;
}
