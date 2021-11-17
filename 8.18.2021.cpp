#define _CRT_SECURE_NO_WARNINGS 1
#include"myfunction.h"
//#include<stdio.h>
//#include<math.h>
//#include<math.h>
//int is_prime(int a)
//{
//	int b = sqrt(a);
//	int m = 1;
//	for (m = 1; m <= b; m++)
//	{
//		int ret = a % m;
//		if (ret == 0&&m!=1)
//		{
//			goto case1;
//		}
//		else if(m==b)
//		{
//			goto case2;
//		}
//	}
//case1:
//	return 0;
//case2:
//	return 1;
//
//}

//int main()
//{
//	int i = 1;
//	for (i = 2; i <= 100; i++)
//	{
//		if (is_prime(i) == 1)
//			printf(" %d ", i);
//		
//	}
//	return 0;
//}
//int main()//质数生成器
//{
//	int m = 0;
//	int i = 2;
//	scanf("%d",&m);
//	while (i < m)
//	{
//		int c = 1;
//		int b = 1;
//		if (c != 0)
//			while (b <= i)
//			{
//				c = i % b;
//				if (c == 0 && b == i)
//				{
//					printf("%d ", i);
//					break;
//				}
//				else if (c != 0||b==1)
//				{
//					b++;
//				}
//				else
//					break;
//			}
//		i++;
//	};
//	return 0;
//}