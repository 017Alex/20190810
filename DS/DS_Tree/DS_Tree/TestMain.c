#include"bintree.h"

int main()
{
	BinTree bt;
	BinTreeInit(&bt);//��ʼ��������
	//BinTreeCreate_1(&bt);//����������1
	bt = BinTreeCreate_2();//����������2
	return 0;
}