#define _CRC_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������ӣ�
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

//����

//1.���泣����ֱ�ӵ�ֵ
//int main()
//{
//	3;
//	100;
//	3.14;
//	printf("%d\n", 3);
//	return 0;
//}

//2.const���εĳ�������
//const--������
//int main()
//{
//	const int num = 4;//num:const���εĳ����������ɱ�
//	printf("%d\n", num);
//	num = 8;//num��const���εĳ������������޸� 
//
//	//����E0137	���ʽ�����ǿ��޸ĵ���ֵ
//	//����C2166	��ֵָ�� const ����	 
//
//	printf("%d\n", num);
//	return 0;
//}

//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//4.ö�ٳ���
//ö�٣�һһ�о�
//�磺�Ա��У�Ů������
//    ��ԭɫ���죬�ƣ���
//    ���ڣ�1,2,3,4,5,6��7

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
//��������0 1 2   MALE  FEMALE  SECRET  ȷ����Ϊ0 1 2

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

//����
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

//ע��ö�ٳ�����MALE,FEMALE,RED,BLUE�ȣ����ɸģ�
//����ͨ��ö�ٳ��������������ı�������s,t,w,sun�ȣ����Ըġ�

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = RED;//ͨ��ö�ٱ��������������ı���(color)�ɸ�
//	printf("%d\n", color);
//	RED = YELLOW;//ö�ٱ������ɸ�
//	//����(�)	E0137	���ʽ�����ǿ��޸ĵ���ֵ
//	//����	C2106	�� = ��: �����������Ϊ��ֵ
//
//
//	return 0;
//}