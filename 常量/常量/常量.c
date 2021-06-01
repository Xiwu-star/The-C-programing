#define _CRC_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//两个数相加：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = a + b;
//	printf("c=%d\n", c);
//	return 0;
//}

//常量

//1.字面常量：直接的值
//int main()
//{
//	3;
//	100;
//	3.14;
//	printf("%d\n", 3);
//	return 0;
//}

//2.const修饰的常变量：
//const--常属性
//int main()
//{
//	const int num = 4;//num:const修饰的常变量，不可变
//	printf("%d\n", num);
//	num = 8;//num被const修饰的常变量，不能修改 
//
//	//错误：E0137	表达式必须是可修改的左值
//	//错误：C2166	左值指定 const 对象	 
//
//	printf("%d\n", num);
//	return 0;
//}

//3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//4.枚举常量
//枚举：一一列举
//如：性别：男，女，保密
//    三原色：红，黄，蓝
//    星期：1,2,3,4,5,6，7

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", s);
//	enum Sex t = FEMALE;
//	printf("%d\n", t);
//	enum Sex w = SECRET;
//	printf("%d\n", w);
//	return 0;
//}
//输出结果：0 1 2   MALE  FEMALE  SECRET  确定的为0 1 2

//enum Color 
//{
//	RED,
//	YELLOW,
//	BLUE
//
//};
//int main()
//{
//	enum Color s = RED;
//	printf("%d\n", s);
//	enum Color t = YELLOW;
//	printf("%d\n", t);
//	enum Color w = BLUE;
//	printf("%d\n", w);
//	return 0;
//}

//星期
//enum Week
//{
//	MONDAY,
//	TUESDAY,
//	WEDNESDAY,
//	THURSDAY,
//	FRIDAY,
//	SATURDAY,
//	SUNDAY
//};
//int main()
//{
//	enum Week o = MONDAY;
//	printf("%d\n", 0);
//	enum Week t = TUESDAY;
//	printf("%d\n", t);
//	enum Week w = WEDNESDAY;
//	printf("%d\n", w);
//	enum Week th = THURSDAY;
//	printf("%d\n", th);
//	enum Week f = FRIDAY;
//	printf("%d\n", f);
//	enum Week s = SATURDAY;
//	printf("%d\n", s);
//	enum Week sun = SUNDAY;
//	printf("%d\n", sun);
//	return 0;
//}

//注：枚举常量（MALE,FEMALE,RED,BLUE等）不可改，
//但是通过枚举常量所创建出来的变量（如s,t,w,sun等）可以改。

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = RED;//通过枚举变量所创建出来的变量(color)可改
//	printf("%d\n", color);
//	RED = YELLOW;//枚举变量不可改
//	//错误(活动)	E0137	表达式必须是可修改的左值
//	//错误	C2106	“ = ”: 左操作数必须为左值
//
//
//	return 0;
//}