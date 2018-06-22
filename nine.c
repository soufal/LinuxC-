#include <stdio.h>
/*
	计算1到100的所有整数中出现了多少次数字9
	
*/
int nine(void)
{
	int i=1;
	int sum=0;
	while(i>=1 && i<=100)
		{
			if(i%10==9)
				sum++;
			if(i/10==9)
				sum++;
			i++;
		}
	return sum;
}

int main(void)
{
	printf("the result is %d\n",nine());
	return 0;
}
				
