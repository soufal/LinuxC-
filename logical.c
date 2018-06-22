#include <stdio.h>

void decide(int x)
{
	/*Way one*/

/*	if(x > 0 && x < 10);
	else
		printf("x is out of range.\n");
*/

	/*Way two*/
	if(x <= 0 || x >=10)
		printf("x is out of range.\n");
	else printf("x is of range.\n");
}


int main(void)
{
	decide(11);
	decide(1);
	decide(12);
	return 0;
}
