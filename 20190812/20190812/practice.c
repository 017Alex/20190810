#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 5,4,3,2,1 };
//	int i;
//	int tem;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		tem = arr2[i];
//		arr2[i] = arr1[i];
//		arr1[i] = tem;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int i;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += pow(-1, i + 1) * 1 / i;
//	}
//	printf("%f", sum);
//	return 0;
//}


int main()
{
	int i;
	int flag = 0;
	for (i = 1; i <= 100; i++)
	{
		if (9 == i % 10)
		{
			flag++;
		}
		if (9 == i / 10)
		{
			flag++;
		}
	}
	printf("%d\n", flag);
	return 0;
}