#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//		//printf("我还有别的选择吗?(1/0)>:");
//		//scanf("%d", &input);
//
//	}
//	
//	else
//	{
//		printf("卖红薯\n");
//		//printf("我还有别的选择吗?(1/0)>:");
//		//scanf("%d", &input);
//	}
//	return 0;
//}

int main()
{
	int coding = 0;
	printf("你会敲代码吗?(选择1或0)>:");
	scanf("%d", &coding);
	if (coding == 1)
	{
		printf("坚持，你会拿到好offer\n");

	}
	else
	{
		printf("放弃，回家卖红薯!\n");
	}
	return 0;

}