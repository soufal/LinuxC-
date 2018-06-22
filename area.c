#include <stdio.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2)
{
	double dx = x2 - x1;
	double dy = y2 - y1;
	double dsquared = dx*dx + dy *dy;
	//printf("dx is %f,dy is %f\n",dx,dy);
	double result = sqrt(dsquared);
	
	return result;


}

double area(double radius)
{
	return 3.1416 * radius *radius;	
}

int main(void)
{
	double radius = distance(1.0,2.0,4.0,6.0);
	double results = area(radius);
	printf("The area of circle is %f\n",results);
	return 0;

}
