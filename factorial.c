#include <stdio.h>

int factorial(int n)
{
	if(n == 0)
		return 1;
	else 
		return n*factorial(n-1);

}

int main(void)
{
	int result = factorial(3);
	printf("The factorial is %d!\n",result);
	return 0;
}
