#include"common.h"

//����ջ�ṹ
typedef struct StackNode
{
	DataType data;
	struct StackNode* next;
}StackNode;

typedef StackNode* ListStack;

//////////////////////////////////////////////��������
//bool ListStackEmpty(ListStack* pst);
void ListStackInit(ListStack* pst);
//void ListStackShow(ListStack pst);
void ListStackPush(ListStack* pst, DataType x);
void ListStackPop(ListStack* pst);
DataType ListStackTop(ListStack* pst);

//////////////////////////////////////////////����ʵ��
int main()
{
	ListStack* stack = (ListStack*)malloc(sizeof(StackNode));
	int data, x, y;
	char ar[20] = { 0 };

	ListStackInit(stack);
	printf("�������׺���ʽ��");
	gets(ar);

	for (int i = 0; ar[i] != '\0'; i++)
	{
		if (ar[i] >= '0' && ar[i] <= '9')
		{
			data = ar[i] - 48;
			ListStackPush(stack, data);
		}
		else
		{
			y = ListStackTop(stack);
			ListStackPop(stack);
			x = ListStackTop(stack);
			ListStackPop(stack);

			switch (ar[i])
			{
			case '+':
				ListStackPush(stack, x + y);
				break;
			case '-':
				ListStackPush(stack, x - y);
				break;
			case '*':
				ListStackPush(stack, x * y);
				break;
			case '/':
				ListStackPush(stack, x / y);
				break;
			}
		}
	}
	printf("���Ϊ��%d", ListStackTop(stack));
	return 0;
}


////�ж�ջ��
//bool ListStackEmpty(ListStack* pst)
//{
//	return *pst == NULL;
//}

//��ʼ��ջ
void ListStackInit(ListStack* pst)
{
	*pst = NULL;
}

//ȡջ��Ԫ��
DataType ListStackTop(ListStack* pst)
{
	assert(*pst != NULL);
	return (*pst)->data;
}

//ѹջ
void ListStackPush(ListStack* pst, DataType x)
{
	StackNode* node = (StackNode*)malloc(sizeof(StackNode));
	assert(node != NULL);
	node->data = x;

	node->next = *pst;
	*pst = node;
}

//��ջ
void ListStackPop(ListStack* pst)
{
	StackNode* p = *pst;
	*pst = p->next;
	free(p);
}

////չʾջ
//void ListStackShow(ListStack pst)
//{
//	StackNode* p = pst;
//	while (p != NULL)
//	{
//		printf("%d\n", p->data);
//		p = p->next;
//	}
//}