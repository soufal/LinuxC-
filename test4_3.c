#include <stdio.h>

void test(int x,int y,int z)
{
	if(x < 3 && y > 3)
		printf("Test OK\n");
	else if(x >= 3 && y >= 3)
		printf("Test OK\n");
//	else if(z > 3 && x >= 3)
//		printf("Test OK\n");
	else if(z <= 3 && y >= 3)
		printf("Test OK\n");
	else
		printf("Test failed\n");


}

int main(void)
{
	test(-3,-3,-1);
	test(4,4,4);
	test(4,4,-1);
	test(-3,-3,4);
	return 0;
}
