//1.��ɲ�������Ϸ��
//
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//void menu()
//{
//	printf("*********************************\n");
//	printf("***********1.��ʼ��Ϸ************\n");
//	printf("***********0. �˳� **************\n");
//	printf("*********************************\n");
//}
//
//
//void game()
//{
//	int num = rand() % 100 + 1;
//	int n = 0;
//	while (1)
//	{
//		printf("���������֣�");
//		scanf("%d", &n);
//		if (n > num)
//		{
//			printf("�´���\n");
//		}
//		else if (n < num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("��������ȷ�����֣�\n");
//			break;
//		}
//	} while (n);
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
//int Search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int ret = Search(arr, 8, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}
//
//
//
//
//
//int main()
//{
//	char password[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//		if (i == 3)
//		{
//			printf("���δ����˳�����\n");
//		}
//	}
//	return 0;
//}






int main()
{
	char n;
	while (1)
	{
		scanf("%c", &n);
		if (n >= 'a' && n <= 'z')
		{
			printf("%c", n - 32);
		}
		else if (n >= 'A' && n <= 'Z')
		{
			printf("%c", n + 32);
		}
	}
	return 0;
}