#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define Maxsize 100

typedef struct {
	int data[Maxsize];
	int length;  //˳���ĳ��ȣ���һ��ָ������ü�¼���һ��Ԫ���������е�λ��
}SeqList;

////////////////////////////////////////////////////////////////////
/*���������ĸ�������*/

SeqList* Init_SeqList();       //����һ���յ�˳���L,��ʼ�� 
bool Insert_SeqList(SeqList* L, int i, int x);// ����
int Delete_SeqList(SeqList* L, int i);//ɾ��
int Location_SeqList(SeqList* L, int x);//����
void show_SeqList(SeqList* L);//��ӡ

////////////////////////////////////////////////////////////////////

int main()
{
	SeqList* L;
	int x, n, m,i;//mΪ����Ԫ�ظ��� 
	Init_SeqList(&L);//��ʼ������
	printf("������Ҫ�����Ԫ�ظ�����");
	scanf("%d", &m);
	printf("��������������:");
	scanf("%d", &x);
	printf("����������λ��:");
	scanf("%d", &i);
	Insert_SeqList(&L, i, x);
	/*
	for (n = 1; n <= m + 1; n++)
	{
		scanf("%d", L->data[n]);
		L->length++;
	}
	*/
	show_SeqList(L);
	return 0;
}
//��ʼ�� 
SeqList* Init_SeqList(SeqList* L)       //����һ���յ�˳���L
{
	L->length = 0;	//��ʾ����û��Ԫ��
}
// ����
bool Insert_SeqList(SeqList* L, int i, int x)
{
	int j;
	if (L->length == Maxsize - 1)	//���������ܲ���
	{
		printf("����");   return false;
	}
	if (i<1 || i > L->length + 1)      //������λ�õ���ȷ��
	{
		printf("λ������"); return false;
	}
	for (j = L->length; j >= i - 1; j--)	//�����һλ��ʼ��
		L->data[j + 1] = L->data[j];  //�ƶ�����
	L->data[i - 1] = x;	//����������
	L->length++;	//�µı�
	return true;	//����ɹ�������
}
//ɾ��
int Delete_SeqList(SeqList* L, int i)
{
	int j;
	if (i<1 || i>L->length + 1)       //���ձ�ɾ��λ�õĺϷ���
	{
		printf("�����ڵ�i��Ԫ��");
		return (0);
	}
	for (j = i; j <= L->length; j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length--;
	return (1);	//ɾ���ɹ�
}
//����
int Location_SeqList(SeqList* L, int x)
{
	int i = 0;
	while (i <= L->length && L->data[i] != x)
		i++;
	if (i > L->length) return -1;
	else return i;	//���ش洢λ��
}
//��ӡ
void show_SeqList(SeqList* L)
{
	int i;
	if (L->length == 0)
	{
		printf("�ձ�����");
	}
	else
	{
		printf("���Ա�");
		for (i = 1; i < L->length; i++)
		{
			printf("%d->", L->data[i]);
		}
		printf("%d", L->data[i]);
	}
}
/*
#include"common.h"
#include"hashtable.h"

int main()
{	
	int ar[] = { 49, 10, 32, 54, 38, 65, 97, 76, 13, 27 };
	int m = 0;
	int ar[] = { 0 };
	printf("���������ݸ���:\n");
	scanf("%d", &m);
	
	printf("����������:\n");
	for (int i = 0; i <= m; i++)
		scanf("%d", &ar[i]);
	int n = sizeof(ar) / sizeof(int);
	HashTable ht; 
	HashTableInit(ht); 
	for (int i = 0; i < n; ++i)
	{
		HashTableInsert(ht, ar[i]);
	}
	HashTableShow(ht);
	printf("=================\n");
	HashTableRemove(ht, 65);
	HashTableShow(ht);
	return 0;
}
*/