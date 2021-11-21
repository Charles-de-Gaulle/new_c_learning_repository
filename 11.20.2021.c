//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<memory.h>
//int main()
//{
//	struct member
//	{
//		char name[8];
//		int chines;
//		int math;
//		int english;
//		int sum;
//	};
//	struct member* pc = malloc(sizeof(struct member) * 1000);
//
//	
//	int i, n, max, count;
//	for (i = 0; i < 1000; i++)
//	{
//		memset(&pc[i], 0, sizeof(struct member));
//	}
//	scanf("%d", &n);
//	for (i = 0; i <n ; i++)
//	{
//		scanf("%s %d %d %d", &pc[i].name, &pc[i].chines, &pc[i].math, &pc[i].english);
//		pc[i].sum = pc[i].chines + pc[i].math + pc[i].english;
//	}
//	max = 0;
//	count = 0;
//	for (i = 0; i < n; i++)
//	{
//
//		if (max<pc[i].sum)
//		{
//			max = pc[i].sum;
//			count = i;
//			
//		}
//		else
//		{
//			;
//		}
//	}
//	printf("%s %d %d %d\n", pc[count].name, pc[count].chines, pc[count].math, pc[count].english);
//	return 0;
//}