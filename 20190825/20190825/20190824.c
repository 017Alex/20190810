#define _CRT_SECURE_NO_WARNINGS 1


//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//
//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
//3.ģ��ʵ��strcpy
//4.ģ��ʵ��strcat


#include<stdio.h>
#include<assert.h>



//int main()
//{
//	int sum = 20;
//	int oth = 20;
//	int a = 0;
//	while (oth >= 1)
//	{
//		oth = oth + a;
//		sum = sum + oth / 2;
//		a = oth % 2;
//		oth = oth / 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




char* My_strcpy(char* arr2, const char* arr1)
{
	char* ret = arr2;
	assert(arr2 != NULL && arr1 != NULL);
	while (*arr2++ = *arr1++)
	{
		;
	}
	return ret;
}

char* My_strcat(char* arr3, const char* arr1)
{
	char* ret = arr3;
	assert(arr3 != NULL && arr1 != NULL);
	while (*arr3 != '\0')
	{
		arr3++;
	}
	while (*arr3++ = *arr1++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[20] = { 0 };
	char arr3[20] = "123456";
	printf("%s\n", My_strcpy(arr2, arr1));
	printf("%s\n",My_strcat(arr3, arr1));
	return 0;
}