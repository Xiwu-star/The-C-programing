#define _CRC_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	//\t--ˮƽ�Ʊ��  \32--32�������˽�������  ʮ����Ϊ26
	printf("%c\n", '\x61');
	//\x61-- \x ������������16���Ƶ�����
	printf("%c\n",'\'');
	//\'������ʾ�ַ����� '
	printf("%c\n", '\"');
	//\"������ʾ�ַ�����  "

	

	return 0;
}