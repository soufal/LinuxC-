#include <stdio.h>

int main(void)
{
	char firstletter;
	int hour,minute,total_minute;
	firstletter = 'a';	/*give firstletter the value 'a'*/
	hour = 11;		/*assign the value 11 to hour*/
	minute = 59;		/*set minute to 59*/
	total_minute = hour * 60 + minute;
	printf("%c\n",firstletter);
	printf("Current time is %d:%d\n",hour,minute);
	printf("Total minute is %d\n",total_minute);
}
