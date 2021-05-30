#include <stdio.h>
//全局变量
//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//		
//	}
//	return 0;
//}
 
//int a = 10;
//int main()
//{
//	printf("a=%d\n", a);
//	return 0;
//}


//局部变量：
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//局部变量和全局变量建议名字不要相同，容易产生误会出现bug。
//如果局部变量和全局变量名字相同时，局部变量优先。

//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//
//}
//两个数的和

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);//&:取地址符号
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//局部变量作用域

//int main()
//{------num生命周期开始
//	int num = 10;
//	printf("num=%d\n", num);
//	return 0;
//}------num生命周期结束

//int main()
//{
//	{
//		int num = 10;
//	}
//	printf("num=%d\n", num);//error
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	{
//		printf("num=%d\n", num);
//	}
//	return 0;
//}

//全局变量作用域

//int global = 2021;
//int main()
//{
//	printf("global=%d\n", global);
//	return 0;
//}


//int global = 2021;
//void test()
//{
//	printf("test( )--%d\n", global);
//}
//int main()
//{
//	test( );
//	printf("global=%d\n", global);
//	return 0;
//}

//全局变量的作用域是整个工程
//int g_val在sum.c中被声明
//int main()
//{
//	extern int g_val;//extern:用来声明外部符号的
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

int main()
{
	{//局部变量a的作用域的生命周期开始
		int a = 10;
		printf("a=%d\n", a);//ok 
	}//局部变量a的作用域的生命周期结束
	printf("a=%d\n", a);//error
	return 0;//局部变量的生命周期只在作用域内
}
//全局变量的生命周期和main函数的生命周期一样，
//main函数生命周期是整个程序生命周期
//全局变量生命周期是整个程序生命周期