#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//2.
////���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9



//void Move(int arr[], int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < right) && ((*left) % 2 != 0))
//		{
//			left++;
//		}
//		while ((left < right) && ((*right) % 2 == 0))
//		{
//			right--;
//		}
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




int Search(int arr[][3], int row, int col, int key)
{
	int i = 0;
	int j = col - 1;
	while ((j >= 0) && (i <= 2))
	{
		if (arr[i][j] == key)
			return 1;
		else if (arr[i][j] < key)
			i++;
		else
			j--;
	}
	return 0;
}

int main()
{
	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
	int row = 3;
	int col = 3;
	int key = 0;
	int ret = 0;
	scanf("%d", &key);
	ret = Search(arr, row, col, key);
	if (ret)
		printf("�ҵ���\n");
	else
		printf("û�ҵ�\n");
	return 0;
}