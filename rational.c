#include <stdio.h>

struct rational{
	int a,b;
};

int zi_part(struct rational z)
{
	return z.a;
}

int mu_part(struct rational z)
{
	return z.b;
}

struct rational make_rational(int a,int b)
{
	struct rational z;
	z.a = a;
	z.b = b;
	return z;
}

int euclid(int zi_part, int mu_part)
{
	int result;
	if((zi_part%mu_part)==0)
		result = mu_part;
	else
		result = euclid(mu_part,zi_part % mu_part);
	return result;
}

struct rational add_rational(struct rational z1,struct rational z2)
{
	int yu;
	struct rational result;
	if(z1.b == z2.b)
		result =  make_rational(zi_part(z1) + zi_part(z2),mu_part(z1));
	else result = make_rational(zi_part(z1)*mu_part(z2) + zi_part(z2)*mu_part(z1), mu_part(z1) * mu_part(z2));
	
	yu = euclid(result.a,result.b);
	result.a = result.a/yu;
	result.b = result.b/yu;
	return result;
}

struct rational sub_rational(struct rational z1, struct rational z2)
{
	struct rational result;
	if(z1.b == z2.b)
		result = make_rational(zi_part(z1) - zi_part(z2),mu_part(z1));
	else result = make_rational(zi_part(z1)*mu_part(z2) - zi_part(z2)*mu_part(z1), mu_part(z1) * mu_part(z2));
	int yu;
	yu = euclid(result.a,result.b);
	result.a = result.a/yu;
	result.b = result.b/yu;
/*	result.a = result.a/(euclid(result.a,result.b));
	result.b = result.b/(euclid(result.a,result.b));
	在这里不能够这样写，需要同上面一样，单独将公约数算出来赋给一个int，不然这里相当于执行了两次euclid，result.b使用的是上一句执行完euclid后的新结果。
*/
	return result;
}

int printf_rational(struct rational z)
{
	if((z.a%z.b)==0)
		printf("the result is %d\n",z.a/z.b);
	else 
		printf("the result is %d/%d\n",z.a,z.b);
}



int main(void)
{
	struct rational a = make_rational(7,8);
	struct rational b = make_rational(1,8);
	printf_rational(add_rational(a,b));
	printf_rational(sub_rational(a,b));
	return 0;
}
