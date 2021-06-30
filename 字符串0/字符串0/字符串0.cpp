#define _CRC_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "abc";//"abc"--'a' 'b' 'c' '\0'
//	char arr2[] = { 'a','b','c' };//没有结束标志'\0'  出现乱码
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
int main()
{
	char arr1[] = "abc";//字符串放入一个数组里
	char arr2[] = { 'a','b','c','\0' };//'\0'是字符串结束的标志，不算做字符串内容
	printf("%d\n", strlen(arr1));//strlen--string lengh  计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}