#include <stdio.h>

int loop(int n)
{
	int f = 0;
	int g = 1;
	while(n > 0)
		{
		g+=f;
		f=g-f;
		n--;
		}
	return g;
}
/*
int fib(int n)
{
	if((n == 0)|| (n==1))
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
*/

int main(void)
{
	int n=5;
	printf("the fibonacci is %d\n",loop(n));
	return 0;
}
