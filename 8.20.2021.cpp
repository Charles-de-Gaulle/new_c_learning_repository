#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int fib1(int m)
//{
//	if (m <= 2)
//		return 1;
//	else
//		return fib1(m - 1) + fib1(m - 2);
//
//}
//int fib2(int m)
//{
//	int i = 1;
//	int l = 1;
//	int r = 1;
//	unsigned int ret = 0;
// 	for (i = 0; i <m-2; )
//	{
//		if (m <= 2)
//			return 1;
//		else
//		{
//			ret = l + r;
//			i++;
//			l = r;
//		
//			r = ret;
//			
//			
//		}
//
//
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	unsigned int ret = 0;
//	ret = fib2(n);
//	printf("%d", ret);
//	return 0;
//}