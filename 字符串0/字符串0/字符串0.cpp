#define _CRC_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "abc";//"abc"--'a' 'b' 'c' '\0'
//	char arr2[] = { 'a','b','c' };//û�н�����־'\0'  ��������
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
int main()
{
	char arr1[] = "abc";//�ַ�������һ��������
	char arr2[] = { 'a','b','c','\0' };//'\0'���ַ��������ı�־���������ַ�������
	printf("%d\n", strlen(arr1));//strlen--string lengh  �����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}