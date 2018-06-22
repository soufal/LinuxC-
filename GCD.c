#include <stdio.h>


int euclid(int a,int b)
{
	int result;
	if((a%b)==0)
		result = b;
	else
		result = euclid(b,a%b);
	return result;
}

int main(void)
{
	int result = euclid(1,8);	
	printf("the GDC is %d\n",result);
	return 0;
}
