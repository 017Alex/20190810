#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//
//2.��дһ������ʵ��n ^ k��ʹ�õݹ�ʵ��
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//4. ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ



//int Fib(int n)//ѭ��
//{
//	int i = 0;
//	int f1 = 1;
//	int f2 = 1;
//	int sum = 1;
//	for (i = 2; i < n; i++)
//	{
//		sum = f1 + f2;
//		f1 = f2;
//		f2 = sum;
//	}
//	return sum;
//}
//
//int Fib(int n)//�ݹ�
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}





//int Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 0;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * Pow(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n",Pow(n, k));
//	return 0;
//}






//int DigitSum(int n)
//{
//	if (n > 0 && n <= 9)
//		return n;
//	else
//		return  n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", DigitSum(num));
//	return 0;
//}





reverse_string(char* string)

int main()
{
	return 0;
}