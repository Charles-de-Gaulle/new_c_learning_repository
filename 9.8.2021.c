//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//
//	int (* pa3)[10] = &arr;
//	return 0;
//}
//int test1(int ii)
//{
//	int m = 10;
//	int coun = 1;
//	for (m = 10; m < 100000; m *= 10)
//	{
//		if (ii % m == ii)
//			break;
//		else
//		{
//			coun++;
//		}
//
//	}
//	return coun;
//}
//int test2(int iii, int count1)
//{
//	int mm = pow(10, count1);
//	int x = iii / mm;
//	int y = x % 10;
//	return y;
//
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100000; i++)
//	{
//		int n = 0;
//		n = test1(i);            //求位数
//		int sum = 0;
//		int count = 0;
//		for(count=0;count<n;count++)
//		{
//			int m = 0;
//			m= test2(i, count);//分别取位
//			sum = sum + pow(m, n);
//		}
//      		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}