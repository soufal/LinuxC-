#include <stdio.h>

void print_ge(int x)
{
	if (0< x/10 < 1)
		printf("the ge of x is %d\n",x);
	else
		printf("the ge of x is %d\n",x%10);
}

void print_ten(int x)
{
	if (0< x/10 <1)
		printf("the ten of x is null\n");
	else 
		printf("the ten of x is %d\n",x/10);
}

int main(void)
{
	int x;
	x = 9;
	print_ge(x);
	print_ten(x);
	return 0;
}
		
