#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<assert.h>

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


//
//unsigned int reverse_bit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += ((value >> 1) & 1) * pow(2, 31 - i);
//	}
//	return sum;
//}

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
//	unsigned int num = 0;
//	scanf("%d", &num);
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
//



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//	ret = (a - b) / 2 + b;       //ret = a+((b-a)>>1);      //ret = (a&b)+((a^b)>>1);
//	printf("%d\n", ret);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}




int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

}

reverse_string(char* left, char* right)
{
	assert(lest && right)
		while (left < right)
		{
			char tmp = *left;
			*left = *right;
			*right = tmp;
			left++;
			right--;
		}
}

void reverse(char arr[])
{
	//1.������������
	char* start;
	char* end;
	int len = my_strlen(arr);
	reverse_string(arr, arr + len - 1);
	//2.����ÿ������
	start = arr;
	end = start;
	while(*end)
	{
		start = end;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_string(start, end - 1);
		end++;
	}
}

int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}