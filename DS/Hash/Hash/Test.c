//#include"hashtable.h"
//
//int main()
//{
//	int ar[] = {49, 10, 32, 54,38, 65,97, 76, 13,27};
//	int n = sizeof(ar) / sizeof(int);
//	HashTable ht; //int a;
//	HashTableInit(ht); //&a
//	for (int i = 0; i < n; ++i)
//	{
//		HashTableInsert(ht, ar[i]);
//	}
//	HashTableShow(ht);
//	printf("=================\n");
//	HashTableRemove(ht, 65);
//	HashTableShow(ht);
//	return 0;
//}













//������һ���������������Hash��Hash��Ĵ洢��λ��ΪͰ��
//ÿ��Ͱ�ܷ�3����������һ��Ͱ��Ҫ�ŵ�Ԫ�س���3��ʱ��
//��Ҫ���µ�Ԫ�ش�������Ͱ�У�ÿ�����ͰҲ�ܷ�3��Ԫ�أ�
//������Ͱʹ��������������Hash��Ļ�Ͱ��ĿΪ����P��
//Hash���hash������Pȡģ�����붨�����£�

#define P 7
#define NULL_DATA -1
typedef struct bucket_node
{
	int data[3];
	struct bucket_node* next;
}bucket_node;

bucket_node hash_table[P];

//���ڼ���hash_table�Ѿ���ʼ�����ˣ�
//insert_new_element()����Ŀ���ǰ�һ���µ�ֵ����hash_table�У�
//Ԫ�ز���ɹ�ʱ����������0�����򷵻�-1����ɺ�����

void Init_bucket_node()
{
	for (int i = 0; i < P; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			hash_table[i].data[j] = NULL_DATA;
		}
		hash_table[i]
	}
}

int insert_new_element(int new_element)
{
}

////////////////////////////////////////////////
int main()
{
	Init_bucket_node();
	int array[] = { 15,14,21,87,96,293,35,24,149,19,63,16,103,77,5,153,145,356,51,68,705,453 };
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		Insert_new_element(array[i]);
	}
	return 0;
}