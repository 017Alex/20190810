#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
//}
//
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//3. ���һ��������ÿһλ��
//
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7



//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value != 0)
//	{
//		if (1 == value % 2)
//		{
//			count++;
//		}
//		value /= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	printf("%d\n", count_one_bits(num));
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	printf("������");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n������");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//	return 0;
//}




int Fun(int n1, int n2)
{
	int count = 0;
	int i = 0;
	while (i < 32)
	{
		if ((n1 & 1) != (n2 & 1))
			count++;
		n1 >>= 1;
		n2 >>= 1;
		i++;
	}
	return count;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	printf("%d", Fun(num1, num2));
	return 0;
}