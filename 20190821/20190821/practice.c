#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//
//4.
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���


//unsigned int reverse_bit(unsigned int value)
//{
//	int arr[32] = { 0 };
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		arr[i] = value & 1;
//		value = value >> 1;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		sum += arr[i] * pow(2, 32 - 1 - i);
//	}
//	return sum;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}




int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	scanf("%d %d", &a, &b);
	ret = (a - b) / 2 + b;
	printf("%d\n", ret);
	return 0;
}