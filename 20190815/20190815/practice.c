#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//2.ʹ�ú���ʵ���������Ľ�����
//
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//
//5.ʵ��һ���������ж�һ�����ǲ���������




//int List(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	List(line);
//	return 0;
//}
//
//
//
//int Swap(int * i, int * j)
//{
//	int flag;
//	flag = *j;
//	*j = *i;
//	*i = flag;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//
//
//
//
//
//int Leapyear(int n)
//{
//	if (n / 100 != 0 && n % 4 == 0)
//	{
//		return 1;
//	}
//	else if (n / 100 == 0 && n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = Leapyear(year);
//	if (1 == ret)
//	{
//		printf("������\n");
//	}
//	else if (0 == ret)
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//int init(int *arr)
//{
//	int i = 0;
//	printf("���ʼ�����飺\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("�����ѳ�ʼ��Ϊ��\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int empty(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("���������Ϊ��\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int reverse(int* arr)
//{
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[4 - i];
//		arr[4 - i] = temp;
//	}
//	printf("��������\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void menu()
//{
//	printf("************************************\n");
//	printf("***********1. ��ʼ������ ***********\n");
//	printf("***********2.  �������  ***********\n");
//	printf("***********3.����Ԫ������***********\n");
//	printf("***********0.   �˳�     ***********\n");
//	printf("************************************\n");
//}
//
//int main()
//{
//	int arr[5] = {0};
//	int n;
//	do{
//		menu();
//		printf("�����룺\n");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			init(arr);
//			break;
//		case 2:
//			empty(arr);
//			break;
//		case 3:
//			reverse(arr);
//			break;
//		case 0:
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (n);
//	return 0;
//}






int Prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = Prime(num);
	if (1 == ret)
	{
		printf("������\n");
	}
	else if (0 == ret)
	{
		printf("��������\n");
	}
	return 0;
}