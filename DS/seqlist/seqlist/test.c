#include"common.h"
#include"seplist.h"

int main()
{
	SeqList mylist;
	SeqListInit(&mylist);
	int select = 1;
	int i, x;
	while (select)
	{
		printf("***********************************\n");
		printf("*1.��������         2.�����Ա���*\n");
		printf("*3.��ֵ����         4.��ֵɾ��    *\n");
		printf("*5.��ʾ˳���                     *\n");
		printf("*            ��0�˳�              *\n");
		printf("***********************************\n");
		printf("��ѡ��:");
		scanf("%d", &select);
		if (0 == select)
			break;
		switch (select)
		{
		case 1:
			printf("��������������:");
			scanf("%d",&x);
			printf("����������λ��:");
			scanf("%d", &i);
			SeqListInsert(&mylist, i, x);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowSeqList(&mylist);
			break;
		default:
			printf("����������������룡��\n");
		}
		system("pause");
		system("cls");
	}
	return 0;
}