#include <stdio.h>
#include <math.h>

//用直角坐标来存储
//定义一个复数结构体
struct complex_struct {
	double x,y;
};

//返回复数的实部和虚部
double real_part(struct complex_struct z)
{
	return z.x;
}

double img_part(struct complex_struct z)
{
	return z.y;
}

//返回复数的模和辐角
double magnitude(struct complex_struct z)
{
	return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z)
{
	return atan2(z.y, z.x);
}

//直角，极坐标转换
struct complex_struct make_from_real_img(double x, double y)
{
	struct complex_struct z;
	z.x = x;
	z.y = y;
	return z;
}

struct complex_struct make_from_mag_ang(double r,double A)
{
	struct complex_struct z;
	z.x = r * cos(A);
	z.y = r * sin(A);
	return z;
}


/*
//用极坐标来存储
struct complex_struct{
	double r,A;
}

double real_part(struct complex_struct z)
{
	return z.r * cos(z.A);
}

double img_part(struct complex_struct z)
{
	return z.r * sin(z.A);
}

double magnitude(struct complex_struct z)
{
	return z.r;
}

double angle(struct complex_struct z)
{
	return z.A;
}

struct complex_struct make_from_real_img(double x, double y)
{
	struct complex_struct z;
	z.A = atan2(y,x);
	z.r = sqrt( x * x +y * y);
	return z;
}

struct complex_struct make_from_mag_ang(double r, double A)
{
	struct complex_struct z;
	z.r = r;
	z.A = A;
	return z;
}
*/

//实现加减乘除运算
struct complex_struct add_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_mag_ang(magnitude(z1) * magnitude(z2),
angle(z1) + angle(z2));
}
struct complex_struct div_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_mag_ang(magnitude(z1) / magnitude(z2),
angle(z1) - angle(z2));
}

double printf_complex(double real_part,double img_part)
{
	if(real_part == 0)
		printf("The complex is %fi\n",img_part);
	else if(img_part == 0)
		printf("The complex is %f\n",real_part);
	else if(img_part > 0)
		printf("The complex is %f+%fi\n",real_part,img_part);
	else printf("The complex is %f%fi\n",real_part,img_part);
}

int main(void)
{
	printf_complex(1,0);
	printf_complex(0,-2.0);
	printf_complex(-1.0,2.0);
	printf_complex(1.0,-2.0);
	return 0;
}
