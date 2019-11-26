#pragma once
#include"bintree.h"

#define QueueDataType BinTreeNode*

//��ʽ����
typedef struct LinkQueueNode
{
	QueueDataType data;
	struct LinkQueueNode* next;
}LinkQueueNode;

typedef struct LinkQueue
{
	LinkQueueNode* front;
	LinkQueueNode* tail;
}LinkQueue;

//////////////////////////////////////////////////////////////////////
void LinkQueueInit(LinkQueue* Q);//��ʼ������
void LinkQueueEn(LinkQueue* Q, QueueDataType x);//���
bool LinkQueueEmpty(LinkQueue* Q);//�ж϶���Ϊ��
QueueDataType LinkQueueFront(LinkQueue* Q);//ȡ��ͷԪ��
void LinkQueueDe(LinkQueue* Q);//����
//////////////////////////////////////////////////////////////////////
void LinkQueueInit(LinkQueue* Q)
{
	Q->front = Q->tail = NULL;
}

void LinkQueueEn(LinkQueue* Q, QueueDataType x)
{
	LinkQueueNode* s = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	assert(s != NULL);
	s->data = x;
	s->next = NULL;

	if (LinkQueueEmpty(Q))
	{
		Q->front = Q->tail = s;
	}
	else
	{
		Q->tail->next = s;
		Q->tail = s;
	}
}

bool LinkQueueEmpty(LinkQueue* Q)
{
	return Q->front == NULL;
}

QueueDataType LinkQueueFront(LinkQueue* Q)
{
	if (LinkQueueEmpty(Q))
	{
		printf("�����ѿգ� ����ȡ��ͷԪ��.\n");
		return;
	}
	return Q->front->data;
}

void LinkQueueDe(LinkQueue* Q)
{
	if (LinkQueueEmpty(Q))
	{
		printf("�����ѿգ� ���ܳ���.\n");
		return;
	}
	LinkQueueNode* p = Q->front;
	Q->front = Q->front->next;
	free(p);
}
