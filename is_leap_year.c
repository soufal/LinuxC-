#include <stdio.h>

int is_leap_year(int year)
{
	if(year % 400 ==0)
		return 1;
	else if ((year % 4 == 0) && (year % 100 !=0))
		return 1;
	else 
		return 0;
}

int main(void)
{
	int year;
	year = 2016;
	if(is_leap_year(year))
		printf("The %d is leap year!\n",year);
	else 
		printf("The %d isn't leap year!\n",year);
	return 0;
}
