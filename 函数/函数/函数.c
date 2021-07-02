#define _CRT_SECURE_NO_WARN.INGS 1

//函数有：自定义函数、库函数
#include <stdio.h>

int Add(int x, int y) //Add-->函数名，int x,int y-->函数参数
{
	int z = x + y;
	return z;
}//大括号内的为函数体

int main( )

{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
	sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}