#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1




//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((2 == b && a != 3) || (2 != b && 3 == a) == 1)
//							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//								if ((1 == c && d != 2) || (1 != c && d == 2) == 1)
//									if ((5 == c && d != 3) || (5 != c && d == 3) == 1)
//										if ((4 == e && a != 1) || (4 != e && 1 == a) == 1)
//											if (1 * 2 * 3 * 4 * 5 == a * b * c * d * e)
//												printf("a=%d, b=%d, c=%d, d=%d, e=%d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int murder;
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)
//		{
//			printf("%c\n", murder);
//
//		}
//
//	}
//	return 0;
//}




int main()
{
	int arr[5][5] = { 0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int m = 0;
		for (m = 0; m < 5 - i; m++)
		{
			printf("  ");
		}
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if ((0 == j) || (i == j))
			{
				arr[i][j] = 1;

			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

			}
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}