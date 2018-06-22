#include <stdio.h>
#include <math.h>

double myround(double x)
{
	if( ((fmod(x,100.0))/10.0) <5.0 )		//求余
		printf("result is %f\n",floor(x));
	else
		printf("result is %f\n",ceil(x));
}

double main(void)
{
	myround(-3.51);
	myround(4.49);
	return 0;
}
