#include <stdio.h>
//ȫ�ֱ���
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


//�ֲ�������
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a=%d\n", a);
//	return 0;
//}

//�ֲ�������ȫ�ֱ����������ֲ�Ҫ��ͬ�����ײ���������bug��
//����ֲ�������ȫ�ֱ���������ͬʱ���ֲ��������ȡ�

//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//
//}
//�������ĺ�

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);//&:ȡ��ַ����
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//�ֲ�����������

//int main()
//{------num�������ڿ�ʼ
//	int num = 10;
//	printf("num=%d\n", num);
//	return 0;
//}------num�������ڽ���

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

//ȫ�ֱ���������

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

//ȫ�ֱ���������������������
//int g_val��sum.c�б�����
//int main()
//{
//	extern int g_val;//extern:���������ⲿ���ŵ�
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

int main()
{
	{//�ֲ�����a����������������ڿ�ʼ
		int a = 10;
		printf("a=%d\n", a);//ok 
	}//�ֲ�����a����������������ڽ���
	printf("a=%d\n", a);//error
	return 0;//�ֲ���������������ֻ����������
}
//ȫ�ֱ������������ں�main��������������һ����
//main������������������������������
//ȫ�ֱ�����������������������������