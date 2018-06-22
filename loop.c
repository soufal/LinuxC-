#include <stdio.h>

int loop_GDC(int a , int b)
{
	while((a%b)!=0)
		{
			a = b;
			b = (a%b);
		}
	return b;
}
/*int euclid(int a,int b)
{
	int result;
	if((a%b)==0)
		result = b;
	else
		result = euclid(b,a%b);
	return result;
}
*/
int main(void)
{
	int result = loop_GDC(8,2);	
	printf("the GDC is %d\n",result);
	return 0;
}
