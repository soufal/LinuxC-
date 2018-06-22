#include<iostream>
#include<stdlib.h> 
#include <string.h>
using namespace std;

char* test(void)
{
	char *p=(char *)malloc(sizeof(char)*100);
	strcpy(p,"hello world");
	return p;
}

int main(void)
{
	char *str;
	str=test();
	cout<<str<<endl;
	return 0;
}
