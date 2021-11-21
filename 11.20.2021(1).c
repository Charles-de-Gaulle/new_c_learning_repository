#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int m, n, p,q,i;
//	float finally;
//	int max[100] = { 0 };
//	int min[100] = { 0 };
//	int sum[100] = { 0 };
//	scanf("%d %d", &n, &m);
//	int arr[100][20] = { {0},{0} };
//	for ( p= 0;  p<n;p ++)
//	{
//		for (q = 0;q< m; q++)
//		{
//			scanf("%d", &arr[p][q]);
//		}
//	}
//
//	for (p = 0; p < n; p++)
//	{
//		max[p] = arr[p][0];
//		min[p] = arr[p][0];
//		for (q = 0; q < m; q++)
//		{
//			if (max[p] < arr[p][q])
//			{
//				max[p] = arr[p][q];
//			}
//			if (min[p] > arr[p][q])
//			{
//				min[p] = arr[p][q];
//			}
//		}
//	}
//	for (p = 0; p < n; p++)
//	{
//		for (q= 0; q < m; q++)
//		{
//			sum[p] += arr[p][q];
//		}
//		sum[p] = sum[p] - max[p] - min[p];
//	}
//	finally = sum[0];
//	for (p = 0; p < n; p++)
//	{
//		
//		if (finally < sum[p])
//		{
//			finally = sum[p];
//		}
//		
//
//	}
//	printf("%.2f\n", finally / (m - 2));
//	return 0;
//}
//int main()
//{
//	int n,i,count,c;
//	scanf("%d", &n);
//	count = n;
//	
//	for (i = 0; i <(n*(n+1)/2);)
//	{
//		for (c = 0; c < count; c++, i++)
//		{
//			printf("%02d", i + 1);
//		}
//		if (count != 0)
//		{
//			printf("\n");
//			count--;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int max;
//	int plain=2;
//	int i = 0;
//	int sum = 0;
//	int temp = 0;
//	int count = 0;
//	scanf("%d", &max);
//	while (1)
//	{
//		for (i = 1; i <=plain; i++)
//		{
//			if (plain % i == 0 &&i == plain)
//			{
//				temp = plain;
//				sum += temp;
//
//				if (sum <= max)
//				{
//					printf("%d\n", temp);
//					count++;
//				}
//				else
//				{
//					printf("%d\n", count);
//					return 0;
//				}
//			}
//			else if (plain % i == 0 && i != plain&&i!=1)
//			{
//				break;
//			}
//		}
//		plain++;
//	}
//
//}
//int main()
//{
//	int month,money,stack;
//	int arr[12] = { 0 };
//	stack = 0;
//	for (month = 0;month < 12; month++)
//	{
//		scanf("%d", &arr[month]);
//	}
//	money= 0;
//	for (month = 0; month < 12; month++)
//	{
//		money+= 300;
//		if ((money - arr[month]) <0)
//		{
//			printf("-%d", month + 1);
//			return 0;
//		}
//		else if ((money - arr[month]) >= 100)
//		{
//			money = money - arr[month];
//			stack += (money / 100) * 100;
//			money =money%100;
//			
//		}
//		else
//		{
//			money = money - arr[month];
//		}
//
//	}
//	printf("%d", (int)(money + 1.2 * stack));
//	return 0;
//}
void fuck(int n)
{
	if (n/2<n/2.0)
	{
		n = n * 3 + 1;
	}
	else
	{
		n = n / 2;
	}
	if (n != 1)
	{
		fuck(n);
		printf("%d ", n);
	}
	else
	{
		printf("%d ", n);
		
	}
}
int main()
{
	int i,u,n;
	u = 1;
	scanf("%d", &n);
	fuck(n);
	printf("%d ", n);
	return 0;
}