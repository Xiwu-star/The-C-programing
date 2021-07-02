#define _CRC_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	//\t--水平制表符  \32--32是两个八进制数字  十进制为26
	printf("%c\n", '\x61');
	//\x61-- \x 代表后面跟的是16进制的数字
	printf("%c\n",'\'');
	//\'用来表示字符常量 '
	printf("%c\n", '\"');
	//\"用来表示字符常量  "

	

	return 0;
}