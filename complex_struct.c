#include <stdio.h>

int main(void)
{
	/*定义一个结构体来表示复数*/
	struct complex_struct {
		double x,y;
	} z1,z2;			
	/*这一句像是变量声明，以；号结尾却不是个语句，是一个类型声明（或者叫类型定义）同时可以定义这种类型的两个变量
等价于
	struct complex_struct z1,z2;
	*/

	double x = 2.0;
	z1.x = x;
	z1.y = 3.0;
	z2.x = -x;
	z2.y = 2.0;
	if(z1.y < 0)
		printf("z1=%f%fi\n",z1.x,z1.y);
	else
		printf("z1=%f+%fi\n",z1.x,z1.y);
	
	printf("z2=%f+%fi\n",z2.x,z2.y);
	return 0;



}
