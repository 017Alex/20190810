#define _CRT_SECURE_NO_WARNINGS 1


//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//void Move(char *p, int k)
//{
//	int len = strlen(p) - 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = p[0];
//		for (j = 0; j < len; j++)
//		{
//			p[j] = p[j + 1];
//		}
//		p[len] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	int sz = strlen(arr) - 1;
//	printf("%s\n", &arr);
//	scanf("%d", &k);
//	Move(arr, k);
//	printf("%s\n", &arr);
//	return 0;
//}



