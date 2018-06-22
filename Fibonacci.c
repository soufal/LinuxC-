#include <stdio.h>


int fib(int n)
{
	if((n == 0)|| (n==1))
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

int main(void)
{
	int n=5;
	printf("the fibonacci is %d\n",fib(n));
	return 0;
}
