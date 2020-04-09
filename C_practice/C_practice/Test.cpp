/*
#include"common.h"
#include<iostream>
using namespace std;

#define int_max 10000 
#define inf 9999  
#define max 20 
#define MAX 20 
#define M 20 

typedef struct ArcCell
{
	int adj; char* info;
}ArcCell, AdjMatrix[20][20];

typedef struct
{
	char vexs[20]; AdjMatrix arcs; int vexnum, arcnum;
}MGraph;

int localvex(MGraph G, char v)
{
	int i = 0; while (G.vexs[i] != v) { ++i; } return i;
}

void ljjzprint(MGraph G)
{
	int i, j, n = 0;
	printf("�������ڽӾ������ª�\n");
	printf("\n");
	printf(" _____________________________________________\n");
	for (i = 0; i != G.vexnum; i++)
	{  
		for (j = 0; j != G.vexnum; j++)
		{
			if (j == 0)printf("                  ");
			printf("%d", G.arcs[i][j].adj); printf("       "); n++;
			if (n == G.vexnum) { printf("\n"); n = 0; }
		}
	}
	printf(" ______________________________________________\n");
}

int creatMGraph(MGraph& G)
{
	char v1, v2;
	int i, j, w;
	printf("�����ڽӾ���:\n");
	printf("������ͼG������кͻ��ߵĸ���:");
	scanf("%d", &G.vexnum);
	scanf("%d", &G.arcnum);
	printf("�������ж���:"); 
		for (i = 0; i < G.vexnum; ++i)
		{
			scanf("%d", &G.vexs[i]);
		}
		for (i = 0; i < G.vexnum; i++)
		for (j = 0; j < G.vexnum; j++)
		{
			G.arcs[i][j].adj = int_max;
			G.arcs[i][j].info = NULL;
		}
	printf("�������б߼������Ķ�����к�Ȩ���몧:\n");
	for (int k = 0; k < G.arcnum; k++)
	{
		scanf("%c", &v1);
		scanf("%c", &v2);
		scanf("%d", &w);
		i = localvex(G, v1);
		j = localvex(G, v2);
		G.arcs[i][j].adj = w;
		G.arcs[j][i].adj = w;
	}
	ljjzprint(G);
	printf("ͼG�ڽӾ��󴴽��ɹ�\n");
	return G.vexnum;
}

int visited[max];
int we;

typedef struct arcnode
{
	int adjvex;
	struct arcnode* nextarc;
	char* info;
}arcnode;

typedef struct vnode
{
	char data;
	arcnode* firstarc;
}vnode, adjlist;

typedef struct//ͼ�Ķ��� 
{
	adjlist vertices[max];
	int vexnum, arcnum;
	int kind;
}algraph;

int prim(int g[][max], int n) //��С������PRIM�㷨 
{
	int lowcost[max], prevex[max];
	int i, j, k, min;
	int sum = 0;
	for (i = 2; i <= n; i++)
	{
		lowcost[i] = g[1][i];
		prevex[i] = 1;
	}
	lowcost[1] = 0;
	for (i = 2; i <= n; i++)
	{
		min = inf;
		k = 0;
		for (j = 2; j <= n; j++)
			if ((lowcost[j] < min) && (lowcost[j] != 0))
			{
				min = lowcost[j];
				k = j;
			}
		printf("(%d,%d)%d\t", prevex[k] - 1, k - 1, min);
		sum += min; lowcost[k] = 0;
		for (j = 2; j <= n; j++)  if (g[k][j] < lowcost[j])
		{
			lowcost[j] = g[k][j];
			prevex[j] = k;
		}
		printf("\n");
	}
	printf("�����������Ĵ���:");
	printf("%d",sum);
	return 0;
}
typedef struct 
{
	int begin;
	int end;
	int weight;
}edge;

typedef struct 
{
	int adj;
	int weight;
}Adj[MAX][MAX];

typedef struct
{
	Adj arc;
	int vexnum, arcnum;
}MGraphA;

void CreatGraph(MGraphA*);//�������� 
void sort(edge*, MGraphA*);
void MiniSpanTree(MGraphA*);
int  Find(int*, int);
void Swapn(edge*, int, int);

void CreatGraph(MGraphA* D)//����ͼ 
{
	int i, j, n, m;
	printf("����������Ͷ�����:");
	scanf("%d %d", &D->arcnum, &D->vexnum);
	for (i = 1; i <= D->vexnum; i++)//��ʼ��ͼ 
	{
		for (j = 1; j <= D->vexnum; j++) {
			D->arc[i][j].adj = D->arc[j][i].adj = 0;
		}
	}
	for (i = 1; i <= D->arcnum; i++)//����ߺ�Ȩֵ 
	{
		printf("\n�������бߵ�2������");
		scanf("%d %d", &n, &m);
		while (n < 0 || n > D->vexnum || m < 0 || n > D->vexnum)
		{
			printf("��������ֲ�����Ҫ�� ����������:");
			scanf("%d%d", &n, &m);
		}
		D->arc[n][m].adj = D->arc[m][n].adj = 1;
		getchar();
		printf("\n������%d��%d֮���Ȩֵ:", n, m);
		scanf("%d", &D->arc[n][m].weight);
	}
	printf("�ڽӾ���Ϊ:\n");
	for (i = 1; i <= D->vexnum; i++)
	{
		for (j = 1; j <= D->vexnum; j++)
		{
			printf("%d ", D->arc[i][j].adj);
		}
		printf("\n");
	}
}
void sort(edge edges[], MGraphA* D)//��Ȩֵ�������� 
{
	int i, j;
	for (i = 1; i < D->arcnum; i++)
	{
		for (j = i + 1; j <= D->arcnum; j++)
		{
			if (edges[i].weight > edges[j].weight)
			{ Swapn(edges, i, j); }
		}
	}
	printf("Ȩ����֮���Ϊ:\n");
	for (i = 1; i < D->arcnum; i++)
	{
		printf("<< %d, %d >>   %d\n", edges[i].begin, edges[i].end,edges[i].weight);
	}
}

void Swapn(edge* edges, int i, int j)//����Ȩֵ�Լ�ͷ��β 
{
	int temp;
	temp = edges[i].begin;
	edges[i].begin = edges[j].begin;
	edges[j].begin = temp;
	temp = edges[i].end;
	edges[i].end = edges[j].end;
	edges[j].end = temp;
	temp = edges[i].weight;
	edges[i].weight = edges[j].weight;
	edges[j].weight = temp;
}

void MiniSpanTree(MGraphA* D)//������С������
{
	int i, j, n, m, SUM = 0;
	int k = 1;
	int parent[M];
	edge edges[M];
	for (i = 1; i < D->vexnum; i++)
	{
		for (j = i + 1; j <= D->vexnum; j++)
		{
			if (D->arc[i][j].adj == 1)
			{
				edges[k].begin = i;
				edges[k].end = j;
				edges[k].weight = D->arc[i][j].weight;
				k++;
			}
		}
	}
	sort(edges, D);
	for (i = 1; i <= D->arcnum; i++)
	{
		parent[i] = 0;
	}   
	printf("��С������Ϊ:\n");
	for (i = 1; i <= D->arcnum; i++)//���Ĳ��� 
	{
		n = Find(parent, edges[i].begin);
		m = Find(parent, edges[i].end);
		if (n != m)
		{
			parent[n] = m; printf("<< %d, %d >>   %d\n",
				edges[i].begin, edges[i].end, edges[i].weight);
			SUM = SUM + edges[i].weight;
		}
	}
	printf("�����������Ĵ���:%d",SUM);
}

int Find(int* parent, int f)//��β 
{
	while (parent[f] > 0)
	{ 
		f = parent[f]; 
	}
	return f;
}

void main()
{
	algraph gra;
	MGraph G;
	MGraphA* D;
	int i, d, m, g[20][20];
	char a = 'a';
	int s;
	char y = 'y';
	while (y = 'y') 
	{
		printf("           ����������С���������󷨡�������\n");
		printf("       ____________________________________________\n");
		printf("      |     1.�����ڽӾ���(����ͼ)                 |\n");
		printf("      |     2.��prim�㷨����С������(����ͼ)       |\n");
		printf("      |     3.��kruskal�㷨����С������            |\n");
		printf("      |___________________________________________ |\n");
		printf("      ��ѡ����Ӧ�Ĳ˵�(1-3):");
		scanf("%d",&s);
		switch (s)
		{
		case 1:
			d = creatMGraph(G);
			vnode v;
			printf("\nע�⪪����ͼΪ��ǿ��ͨͼ(���ж����ͨ����)ʱ\n��С������������,����ʾΪ�Ƿ�ֵ\n\n");
			break;
		case 2:
			printf("prim�㷨�������\n");
			for (i = 0; i != G.vexnum; ++i)
				for (int j = 0; j != G.vexnum; ++j)
					g[i + 1][j + 1] = G.arcs[i][j].adj;
			prim(g, d);
			break;
		case 3:
			printf("kruskal�㷨�������\n");
			D = (MGraphA*)malloc(sizeof(MGraphA));
			CreatGraph(D);
			MiniSpanTree(D);
			break;
		}
		printf("\n\n�Ƿ������y/n:");
		scanf("%d", &y);
		if (y == 'n')
			break;
	}
}
*/





















//#include<stdio.h>
//#include<stdlib.h>
//
//#define MaxVertexNum 100
//#define ERROR 0
//#define OK 1
//#define FALSE 0
//#define TRUE 1
//
//typedef int Boolean;
//typedef int VertexType;
//Boolean visit[MaxVertexNum];
//typedef struct node
//{
//	int adjvex;
//	struct node* next;
//}EdgeNode;
//
//typedef struct
//{
//	VertexType vertex;
//	EdgeNode* firstedge;
//}VertexNode;
//
//typedef VertexNode AdjList[MaxVertexNum];
//
//typedef struct
//{
//	AdjList adjlist;
//	int n, e;
//}ALGraph;
//
//int FindVertex(ALGraph* G, int e, int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		if (G->adjlist[i].vertex == e)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void create(ALGraph* G)//�����ڽӱ�
//{
//	int i, j, k, w, v;
//	EdgeNode* s;
//
//	printf("���붥��ͱ���");
//	scanf("%d %d", &G->n, &G->e);
//
//	for (i = 0; i < G->n; i++)
//	{
//
//		printf("���������");
//		fflush(stdin);
//		scanf("%d", &G->adjlist[i].vertex);
//		G->adjlist[i].firstedge = NULL;
//	}
//	printf("�����߱�\n");
//	for (k = 0; k < G->e; k++)
//	{
//		printf("����(vi-vj)�Ķ�������");
//		scanf("%d %d", &i, &j);
//
//		i = FindVertex(G, i, G->n);
//		j = FindVertex(G, j, G->n);
//		if (i == -1 || j == -1)
//		{
//			printf("�Ҳ������㣬����������!\n");
//			printf("����(vi-vj)�Ķ�������");
//			scanf("%d %d", &i, &j);
//			i = FindVertex(G, i, G->n);
//			j = FindVertex(G, j, G->n);
//		}
//		s = (EdgeNode*)malloc(sizeof(EdgeNode));
//		s->adjvex = (j);
//		s->next = G->adjlist[i].firstedge;
//		G->adjlist[i].firstedge = s;
//	}
//}
//
//void TopoSort(ALGraph* G, int n)
//{
//	int i, j, k, top, m = 0;
//	EdgeNode* p;
//	int* d = (int*)malloc(n * sizeof(int));
//	for (i = 0; i < n; i++)		//��ʼ������
//	{
//		d[i] = 0;
//	}
//	for (i = 0; i < n; i++)		//ͳ�Ƹ������������������������������������
//	{
//		p = G->adjlist[i].firstedge;
//		while (p != NULL)
//		{
//			j = p->adjvex;
//			d[j]++;
//			p = p->next;
//		}
//	}
//	top = -1;
//	for (i = 0; i < n; i++)			//���ҳ����������0�Ķ���
//	{
//		if (d[i] == 0)
//		{
//			d[i] = top;
//			top = i;
//		}
//	}
//
//	while (top != -1)
//	{
//		j = top;
//		top = d[top];
//		printf("%d ", j);
//		m++;		//ͳ�ƶ���
//		p = G->adjlist[j].firstedge;
//		while (p)
//		{
//			k = p->adjvex;		//��l���ӵĶ���
//			d[k]--;		//�����ӵĶ�����ȼ�1
//			if (d[k] == 0)		//����������Ϊ0���¶��㣬�Ӹö������
//			{
//				d[k] = top;
//				top = k;
//			}
//			p = p->next;
//		}
//
//	}
//	if (m < n) printf("\n�л�·��\n");
//	free(d);
//}
//
//void main()
//{
//	ALGraph* G = (ALGraph*)malloc(sizeof(ALGraph));
//	EdgeNode* p;
//	create(G);
//	int i;
//	printf("���ڽӱ�Ϊ('->'��ʾ����֮��������)��\n");
//	for (i = 0; i < G->n; i++)
//	{
//		p = G->adjlist[i].firstedge;
//		printf("%d->", G->adjlist[i].vertex);
//		while (p != NULL)
//		{
//			printf("%d->", G->adjlist[p->adjvex].vertex);
//			p = p->next;
//		}
//		printf("\n");
//	}
//	printf("��������Ϊ��\n");
//	TopoSort(G, G->n);
//}

















//#include"common.h"
//
////����ջ�ṹ
//typedef struct StackNode
//{
//	DataType data;
//	struct StackNode* next;
//}StackNode;
//
//typedef StackNode* ListStack;
//
////////////////////////////////////////////////��������
////bool ListStackEmpty(ListStack* pst);
//void ListStackInit(ListStack* pst);
////void ListStackShow(ListStack pst);
//void ListStackPush(ListStack* pst, DataType x);
//void ListStackPop(ListStack* pst);
//DataType ListStackTop(ListStack* pst);
//
////////////////////////////////////////////////����ʵ��
//int main()
//{
//	ListStack* stack = (ListStack*)malloc(sizeof(StackNode));
//	int data, x, y;
//	char ar[20] = { 0 };
//
//	ListStackInit(stack);
//	printf("�������׺���ʽ��");
//	gets(ar);
//
//	for (int i = 0; ar[i] != '\0'; i++)
//	{
//		if (ar[i] >= '0' && ar[i] <= '9')
//		{
//			data = ar[i] - 48;
//			ListStackPush(stack, data);
//		}
//		else
//		{
//			y = ListStackTop(stack);
//			ListStackPop(stack);
//			x = ListStackTop(stack);
//			ListStackPop(stack);
//
//			switch (ar[i])
//			{
//			case '+':
//				ListStackPush(stack, x + y);
//				break;
//			case '-':
//				ListStackPush(stack, x - y);
//				break;
//			case '*':
//				ListStackPush(stack, x * y);
//				break;
//			case '/':
//				ListStackPush(stack, x / y);
//				break;
//			}
//		}
//	}
//	printf("���Ϊ��%d", ListStackTop(stack));
//	return 0;
//}
//
//
//////�ж�ջ��
////bool ListStackEmpty(ListStack* pst)
////{
////	return *pst == NULL;
////}
//
////��ʼ��ջ
//void ListStackInit(ListStack* pst)
//{
//	*pst = NULL;
//}
//
////ȡջ��Ԫ��
//DataType ListStackTop(ListStack* pst)
//{
//	assert(*pst != NULL);
//	return (*pst)->data;
//}
//
////ѹջ
//void ListStackPush(ListStack* pst, DataType x)
//{
//	StackNode* node = (StackNode*)malloc(sizeof(StackNode));
//	assert(node != NULL);
//	node->data = x;
//
//	node->next = *pst;
//	*pst = node;
//}
//
////��ջ
//void ListStackPop(ListStack* pst)
//{
//	StackNode* p = *pst;
//	*pst = p->next;
//	free(p);
//}

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























//typedef struct SListNode//�����ڵ�
//{
//	DataType data;
//	struct SListNode* next;
//}SListNode;
//
//SListNode* CreateSList()
//{
//	SListNode* first = (SListNode*)malloc(sizeof(SListNode));
//	SListNode* last = first;
//	SListNode* new = NULL;
//	int i = 0;
//	int size = 0;
//	printf("���ݸ���:>");
//	scanf("%d", &size);
//	printf("���������� :>");
//	for (i = 0; i < size; i++)
//	{
//		new = (SListNode*)malloc(sizeof(SListNode));
//		scanf("%d", &new->data);
//		last->next = new;
//		last = new;
//		last->next = NULL;
//	}
//	return first;
//}
//
//void ShowList(SListNode* list1)
//{
//	SListNode* tem = list1->next;
//	while (tem != NULL) {
//		printf("%d  ", tem->data);
//		tem = tem->next;
//	}
//	printf("\n");
//}
//
//SListNode* GetMergeList(SListNode* list1, SListNode* list2)
//{
//	SListNode* tem = list1->next;
//	while (1)
//	{
//		if (tem->next == NULL)
//		{
//			tem->next = list2->next;
//			break;
//		}
//		tem = tem->next;
//	}
//	return list1;
//}
//
//void Reverse(SListNode* list)
//{
//	SListNode* tem = list->next;
//	SListNode* new;
//	list->next = NULL;
//	while (tem != NULL)
//	{
//		new = tem;
//		tem = tem->next;
//		new->next = list->next;
//		list->next = new;
//	}
//}
//
//
//int main()
//{
//	//��������1
//	printf("��������1:\n");
//	SListNode* list1 = CreateSList();
//	printf("����1:\n");
//	ShowList(list1);//��ʾ����
//	printf("\n");
//	//��������2
//	printf("��������2\n");
//	SListNode* list2 = CreateSList();
//	printf("����2:\n");
//	ShowList(list2);
//	printf("\n");
//	//�ϲ�����
//	printf("�ϲ�����:");
//	SListNode* list = GetMergeList(list1, list2);
//	ShowList(list);
//	//��������
//	printf("��������:\n");
//	Reverse(list);
//	ShowList(list);
//	return 0;
//}