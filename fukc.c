//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	typedef struct EDU
//	{
//		char name[20];
//		int edg;
//		int point;
//	}EDU;
//
//	int n = 0;
//	scanf("%d", &n);
//
//	EDU* pc = malloc(sizeof(EDU) * n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d\n", &pc[i].name, &pc[i].edg, &pc[i].point);
//
//		//printf("hehe\n");
//	
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int a = (int)(pc[i].point * 1.2);
//		if (a>600)
//		{
//			a = 600;
//		}
//		printf("%s %d %d\n", pc[i].name, pc[i].edg + 1, a);
//	}
//	return 0;
//}