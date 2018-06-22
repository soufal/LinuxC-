#include <stdio.h>

int main(void)
{
	int x = -1;
	if (x > 0)		/*存在分号！！！！代表是一个单独的语句，同下面的printf无关*/
		printf("x is position\n");
	printf("x if negetive\n");
	return 0;
}
