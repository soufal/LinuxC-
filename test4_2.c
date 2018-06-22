#include <stdio.h>

void test(int x,int y)
{
	/*way one*/
/*	if(x > 0)
		printf("Test OK!\n");
	else if(x <=0 && y > 0)
		printf("Test OK!\n");
	else 
		printf("Test failed!\n");
*/
	/*way two*/
	if(y <= 0 && x <= 0)
		printf("Test faild!\n");
	else
		printf("Test OK!\n");
}


int main(void)
{
	test(1,-1);
	return 0;
}
