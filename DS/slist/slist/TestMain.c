#include"common.h"

/*typedef struct SListNode//�����ڵ�
{
	DataType data;
	struct SListNode* next;
}SListNode;

SListNode* CreateSList()
{
	SListNode* first = (SListNode*)malloc(sizeof(SListNode));
	SListNode* last = first;
	SListNode* new = NULL;
	int i = 0;
	int size = 0;
	printf("���ݸ���:>");
	scanf("%d", &size);
	printf("���������� :>");
	for (i = 0; i < size; i++)
	{
		new = (SListNode*)malloc(sizeof(SListNode));
		scanf("%d", &new->data);
		last->next = new;
		last = new;
		last->next = NULL;
	}
	return first;
}

void ShowList(SListNode* list1)
{
	SListNode* tem = list1->next;
	while (tem != NULL) {
		printf("%d  ", tem->data);
		tem = tem->next;
	}
	printf("\n");
}

SListNode* GetMergeList(SListNode* list1, SListNode* list2)
{
	SListNode* tem = list1->next;
	while (1)
	{
		if (tem->next == NULL)
		{
			tem->next = list2->next;
			break;
		}
		tem = tem->next;
	}
	return list1;
}

void Reverse(SListNode* list)
{
	SListNode* tem = list->next;
	SListNode* new;
	list->next = NULL;
	while (tem != NULL)
	{
		new = tem;
		tem = tem->next;
		new->next = list->next;
		list->next = new;
	}
}


int main()
{
	//��������1
	printf("��������1:\n");
	SListNode* list1 = CreateSList();
	printf("����1:\n");
	ShowList(list1);//��ʾ����
	printf("\n");
	//��������2
	printf("��������2\n");
	SListNode* list2 = CreateSList();
	printf("����2:\n");
	ShowList(list2);
	printf("\n");
	//�ϲ�����
	printf("�ϲ�����:");
	SListNode* list = GetMergeList(list1, list2);
	ShowList(list);
	//��������
	printf("��������:\n");
	Reverse(list);
	ShowList(list);
	return 0;
}*/



#include"slist.h"

int main()
{
	SList mylist;
	SListInit(&mylist);
	int select = 1;
	SListNode* p;
	int pos;
	DataType item,key;
	DataType ret = 0;
	bool flag = 0;
	while (select)
	{
		printf("*****************************************\n");
		printf("* [1] push_back         [2] push_front  *\n");//1β��   2ͷ��
		printf("* [3] show_list         [4] pop_back    *\n");//3չʾ����   4βɾ
		printf("* [5] pop_front         [6] insert_pos  *\n");//5ͷɾ
		printf("* [7] insert_val        [8] delete_pos  *\n");
		printf("* [9] delete_val        [10] find_pos   *\n");
		printf("* [11] find_val         [12] sort       *\n");
		printf("* [13] reverse          [14] length     *\n");
		printf("* [15] clear            [16] modify_pos *\n");//15�������
		printf("* [17] modify_val       [18] capacity   *\n");
		printf("* [0] quit_system                       *\n");
		printf("*****************************************\n");
		printf("��ѡ��:>");
		scanf("%d", &select);
		if (select == 0)
			break;
		switch (select)
		{
		case 1:
			printf("������Ҫ���������<-1����>:>");
			while (scanf("%d", &item), item != -1)
			{
				SListPushBack(&mylist, item);
			}
			break;
		case 2:
			printf("������Ҫ���������<-1����>:>");
			while (scanf("%d", &item), item != -1)
			{
				SListPushFront(&mylist, item);
			}
			break;
		case 3:
			SListShow(&mylist);
			break;
		case 4:
			SListPopBack(&mylist);
			break;
		case 5:
			SListPopFront(&mylist);
			break;
		case 6:
			printf("������Ҫ�����λ��:>");
			scanf("%d", &pos);
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			//SeqListInsertByPos(&mylist, pos, item);
			break;
		case 7:
			printf("������Ҫ���������:>");
			scanf("%d", &item);
			SListInsertByVal(&mylist, item);
			break;
		case 8:
			printf("������Ҫɾ����λ��:>");
			scanf("%d", &pos);
			//SeqListDeleteByPos(&mylist, pos);
			break;
		case 9:
			printf("������Ҫɾ��������:>");
			scanf("%d", &key);
			SListDeleteByVal(&mylist, key);
			break;
		case 10:
			printf("������Ҫ���ҵ�λ��:>");
			scanf("%d", &pos);
			//flag = SeqListFindByPos(&mylist, pos, &ret); //true false
			if (flag)
				printf("���ҵ�����Ϊ:> %d\n", ret);
			else
				printf("���ҵ����ݲ�����.\n");
			break;
		case 11:
			printf("������Ҫ���ҵ�ֵ:>");
			scanf("%d", &key);
			p = SListFindByVal(&mylist, key);
			if (pos == -1)
				printf("���ҵ����ݲ�����.\n");
			else
				printf("�������ڵ��±�Ϊ:> %d\n", pos);
			break;
		case 12:
			SListSort(&mylist);
			break;
		case 13:
			SListReverse(&mylist);
			break;
		case 14:
			//printf("SeqList Length = %d\n", SListLength(&mylist));
			break;
		case 15:
			SListClear(&mylist);
			break;
		case 18:
			//printf("capacity = %d\n", SeqListCapacity(&mylist));
			break;
		default:
			printf("�����������������......\n");
			break;
		}
	system("pause");
	system("cls");//����
	
	}

	SListDestroy(&mylist);
	return 0;
}