#include <stdio.h>
#include <stdlib.h>

static char daytab[2][13] = 
{
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


int day_of_year(int year, int month, int day)
{
	int i, leap;
	leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

	if (month < 1 || month > 12)
		return -1;

	if (day < 1 || day > daytab[leap][month])
		return -1;

	for(i = 1; i < month; i++)
	{
		day += daytab[leap][i];
	}
	return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
	if( year < 1 )
	{
		*pmonth = *pday = -1;
		return;
	}

	int i, leap;
	leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
 
    for (i =1; i <= 12 && yearday > daytab[leap][i]; i++)
    	yearday -= daytab[leap][i];
    if (i > 12 && yearday > daytab[leap][12])
    {
    	*pmonth = -1;
    	*pday = -1;
    }
    else{
    	*pmonth = i;
    	*pday = yearday;
    }
}

int main(void)
{
	int month, day, year, yearday, num;

	year = 1994;
	month = 8;
	day = 31;
	yearday = 243;
    
    num = day_of_year(year, month, day);
	if (num == -1)
		printf("It is not right.\n");
	else 
		printf("%d %d %d is %d %d\n", year, month, day, year, num);


    month_day(year, yearday, &month, &day);
    if (month == -1 && day == -1)
    	printf("This is not right\n");
     else
     	printf("%d %d is %d %d %d\n", year, yearday, year, month, day);






	return 0;
}