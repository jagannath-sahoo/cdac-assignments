/* Q10. Finding day of week based on reference date, say 1 st January 1970
which is Thursday.*/

#include<stdio.h>

#define LEAP_YEAR_DAYS  366
#define DAYS_IN_YEAR	365

static const days31[] = {1,3,5,7,8,10,12};

int checkLeapYear(int year);

int main()
{

	int rdd, rmm, ryy, rday, countLeapYear = 0;
	int totalDays = 0;
	printf("Enter a Ref. date in DD:MM:YY\n");
	scanf("%d%d%d",&rdd, &rmm, &ryy);
	printf("Enter Ref. day\n 1 = Sunday to 7 = Saturday\n");
	scanf("%d",&rday);

	int dd, mm, yy, day;
	printf("Enter a Ref. date in DD:MM:YY\n");
	scanf("%d%d%d",&dd, &mm, &yy);
	printf("Enter Ref. day\n 1 = Sunday to 7 = Saturday\n");
	scanf("%d",&day);

	int yyDif = (yy-1) - ryy;
	//Check leap year
	for(ryy; yy<=ryy;ryy++)
	{
		if(checkLeapYear(ryy) == 1)
			countLeapYear++;
	}
	
	totalDays = totalDays + (countLeapYear * LEAP_YEAR_DAYS) + ((yyDif - countLeapYear) * DAYS_IN_YEAR);
	/*
	 * 1 JAN 2010 to 1 JAN 2019
	 */
	//Months
	int ddDif = mm - rmm;
	if(checkLeapYear(yy) == 1)
	{
		totalDays = 
	}

	return 0;
}


int checkLeapYear(int year){
	if((year%4)== 0)
		return 1;
	else
		return 1;
	return 0;
}


