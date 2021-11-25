//#define _CRT_SECURE_NO_WARNINGS 1
//#include<memory.h>
//#include<stdlib.h>
//#include<stdio.h>
//#define my_max 100
//void m_add(int (*arr)[my_max][my_max], int x, int y)
//{
//	x--;
//	y--;
//	*arr[x][y] = 1;
//	if (x-2>=0)
//	{
//		*arr [x - 2][y] = 1;
//	}
//	if (x-1>=0)
//	{
//		*arr[x - 1][y] = 1;
//	}
//	if (x+1< my_max)
//	{
//		*arr[x + 1][y] = 1;
//	}
//	if (x+2< my_max)
//	{
//		*arr[x + 2][y] = 1;
//	}
//	if (y-1>=0)
//	{
//		*arr[x][y - 1] = 1;
//	}
//	if (y-2>=0)
//	{
//		*arr[x][y - 2] = 1;
//	}
//	if (y+1< my_max)
//	{
//		*arr[x][y + 1] = 1;
//	}
//	if (y+2< my_max)
//	{
//		*arr[x][y + 2] = 1;
//	}
//	if (x - 1 >= 0 && y - 1 >= 0)
//	{
//		*arr[x - 1][y - 1] = 1;
//	}
//	if (x + 1 < my_max && y + 1 < my_max)
//	{
//		*arr[x + 1][y + 1] = 1;
//	}
//	if (x - 1 >= 0 && y + 1 < my_max)
//	{
//		*arr[x - 1][y + 1] = 1;
//	}
//	if (x + 1 < my_max && y - 1 >=0)
//	{
//		*arr[x + 1][y - 1] = 1;
//	}
//}
//void k_add(int (* arr)[my_max][my_max], int o, int p)
//{
//	o--;
//	p--;
//	*arr[o][p] = 1;
//	if (o - 2 >= 0)
//	{
//		*arr[o - 2][p] = 1;
//	}
//	if (o - 1 >= 0)
//	{
//		*arr[o - 1][p] = 1;
//	}
//	if (o+ 1 < my_max)
//	{
//		*arr[o + 1][p] = 1;
//	}
//	if (o + 2 < my_max)
//	{
//		*arr[o + 2][p] = 1;
//	}
//	if (o - 1 >= 0)
//	{
//		*arr[o][p - 1] = 1;
//	}
//	if (p - 2 >= 0)
//	{
//		*arr[o][p - 2] = 1;
//	}
//	if (p + 1 < my_max)
//	{
//		*arr[o][p + 1] = 1;
//	}
//	if (p + 2 < my_max)
//	{
//		*arr[o][p + 2] = 1;
//	}
//	if (o - 1 >= 0 && p - 1 >= 0)
//	{
//		*arr[o - 1][p - 1] = 1;
//	}
//	if (o + 1 < my_max && p + 1 < my_max)
//	{
//		*arr[o + 1][p + 1] = 1;
//	}
//	if (o - 1 >= 0 && p + 1 < my_max)
//	{
//		*arr[o - 1][p + 1] = 1;
//	}
//	if (o + 1 < my_max && p - 1 >= 0)
//	{
//		*arr[o + 1][p - 1] = 1;
//	}
//	if (o - 2 >= 0 && p - 2 >= 0)
//	{
//		*arr[o - 2][p - 2] = 1;
//	}
//	if (o - 1 >= 0 && p - 2 >= 0)
//	{
//		*arr[o - 1][p - 2] = 1;
//	}
//	if (o - 2 >= 0 && p - 1 >= 0)
//	{
//		*arr[o - 2][p - 1] = 1;
//	}
//	if (o + 2 < my_max && p + 2 < my_max)
//	{
//		*arr[o + 2][p + 2] = 1;
//	}
//	if (o + 1 < my_max && p + 2 < my_max)
//	{
//		*arr[o + 1][p + 2] = 1;
//	}
//	if (o + 2 < my_max && p + 1 < my_max)
//	{
//		*arr[o + 2][p + 1] = 1;
//	}
//	if (o + 2 < my_max && p - 2 >= 0)
//	{
//		*arr[o + 2][p - 2] = 1;
//	}
//	if (o + 1 < my_max && p - 2 >= 0)
//	{
//		*arr[o + 1][p - 2] = 1;
//	}
//	if (o + 2 < my_max && p - 1 >= 0)
//	{
//		*arr[o + 2][p - 1] = 1;
//	}
//	if (o - 2 <=0 && p + 2 < my_max)
//	{
//		*arr[o - 2][p + 2] = 1;
//	}
//	if (o - 1 <= 0 && p + 2 < my_max)
//	{
//		*arr[o - 1][p + 2] = 1;
//	}
//	if (o - 2 <= 0 && p + 1 < my_max)
//	{
//		*arr[o - 2][p + 1] = 1;
//	}
//}
//
//int main()
//{
//	int n, m, k,i,l,count;
//	count = 0;
//	int x, y, o, p;
//	scanf("%d %d %d", &n, &m, &k);
//	//int arr[max][max] = { 0 };
//	int(*arr)[my_max][my_max], (*pc)[my_max][my_max];
//	arr = NULL;
//	pc=malloc(sizeof(int) * my_max * my_max);
//	if (pc!= NULL)
//	{
//		arr = pc;
//		for (i = 0; i < n; i++)
//		{
//			for (l = 0; l < n; l++)
//			{
//				*arr[i][l] = 0;
//			}
//		}
//		
//	}
//	else
//	{
//		printf("error");
//		return 0;
//	}
//	
//	if (m > 0)
//	{
//		for (i = 0; i < m; i++)//ÁÁ1°µ0
//		{
//			scanf("%d %d", &x, &y);
//			m_add(arr, x, y);
//
//		}
//		for (i = 0; i < k; i++)
//		{
//			scanf("%d %d", &o, &p);
//			k_add(arr, o, p);
//
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (l = 0; l < n; l++)
//		{
//			if (*arr[i][l] != 1)
//			{
//				count++;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (l = 0; l < n; l++)
//		{
//			printf("%d", (* (*arr+i)+l));
//		}
//		printf("\n");
//	}
//	printf("%d", count);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define max 100
void m_add(int arr[max][max], int x, int y)
{
	x--;
	y--;
	int a;
	a = x;
	x = y;
	y = a;
	arr[x][y] = 1;
	if (x - 2 >= 0)
	{
		arr[x - 2][y] = 1;
	}
	if (x - 1 >= 0)
	{
		arr[x - 1][y] = 1;
	}
	if (x + 1 < max)
	{
		arr[x + 1][y] = 1;
	}
	if (x + 2 < max)
	{
		arr[x + 2][y] = 1;
	}
	if (y - 1 >= 0)
	{
		arr[x][y - 1] = 1;
	}
	if (y - 2 >= 0)
	{
		arr[x][y - 2] = 1;
	}
	if (y + 1 < max)
	{
		arr[x][y + 1] = 1;
	}
	if (y + 2 < max)
	{
		arr[x][y + 2] = 1;
	}
	if (x - 1 >= 0 && y - 1 >= 0)
	{
		arr[x - 1][y - 1] = 1;
	}
	if (x + 1 < max && y + 1 < max)
	{
		arr[x + 1][y + 1] = 1;
	}
	if (x - 1 >= 0 && y + 1 < max)
	{
		arr[x - 1][y + 1] = 1;
	}
	if (x + 1 < max && y - 1 >= 0)
	{
		arr[x + 1][y - 1] = 1;
	}
}
void k_add(int arr[max][max], int o, int p)
{
	o--;
	p--;
	int a;
	a = o;
	o = p;
	p = a;
	arr[o][p] = 1;
	if (o - 2 >= 0)
	{
		arr[o - 2][p] = 1;
	}
	if (o - 1 >= 0)
	{
		arr[o - 1][p] = 1;
	}
	if (o + 1 < max)
	{
		arr[o + 1][p] = 1;
	}
	if (o + 2 < max)
	{
		arr[o + 2][p] = 1;
	}
	if (o - 1 >= 0)
	{
		arr[o][p - 1] = 1;
	}
	if (p - 2 >= 0)
	{
		arr[o][p - 2] = 1;
	}
	if (p + 1 < max)
	{
		arr[o][p + 1] = 1;
	}
	if (p + 2 < max)
	{
		arr[o][p + 2] = 1;
	}
	if (o - 1 >= 0 && p - 1 >= 0)
	{
		arr[o - 1][p - 1] = 1;
	}
	if (o + 1 < max && p + 1 < max)
	{
		arr[o + 1][p + 1] = 1;
	}
	if (o - 1 >= 0 && p + 1 < max)
	{
		arr[o - 1][p + 1] = 1;
	}
	if (o + 1 < max && p - 1 >= 0)
	{
		arr[o + 1][p - 1] = 1;
	}
	if (o - 2 >= 0 && p - 2 >= 0)
	{
		arr[o - 2][p - 2] = 1;
	}
	if (o - 1 >= 0 && p - 2 >= 0)
	{
		arr[o - 1][p - 2] = 1;
	}
	if (o - 2 >= 0 && p - 1 >= 0)
	{
		arr[o - 2][p - 1] = 1;
	}
	if (o + 2 < max && p + 2 < max)
	{
		arr[o + 2][p + 2] = 1;
	}
	if (o + 1 < max && p + 2 < max)
	{
		arr[o + 1][p + 2] = 1;
	}
	if (o + 2 < max && p + 1 < max)
	{
		arr[o + 2][p + 1] = 1;
	}
	if (o + 2 < max && p - 2 >= 0)
	{
		arr[o + 2][p - 2] = 1;
	}
	if (o + 1 < max && p - 2 >= 0)
	{
		arr[o + 1][p - 2] = 1;
	}
	if (o + 2 < max && p - 1 >= 0)
	{
		arr[o + 2][p - 1] = 1;
	}
	if (o - 2 >= 0 && p + 2 < max)
	{
		arr[o - 2][p + 2] = 1;
	}
	if (o - 1 >= 0 && p + 2 < max)
	{
		arr[o - 1][p + 2] = 1;
	}
	if (o - 2 >= 0 && p + 1 < max)
	{
		arr[o - 2][p + 1] = 1;
	}
}

int main()
{
	int n, m, k, i, l, count;
	count = 0;
	int x, y, o, p;
	scanf("%d %d %d", &n, &m, &k);
	int arr[max][max] = { 0 };
	
	if (m != 0)
	{
		for (i = 0; i < m; i++)//ÁÁ1°µ0
		{
			scanf("%d %d", &x, &y);
			m_add(arr, x, y);

		}
	}
	if (k != 0)
	{
		for (i = 0; i < k; i++)
		{
			scanf("%d %d", &o, &p);
			k_add(arr, o, p);

		}
	}
	for (i = 0; i < n; i++)
	{
		for (l = 0; l < n; l++)
		{
			if (arr[i][l] != 1)
			{
				count++;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (l = 0; l < n; l++)
		{
			printf("%d", arr[i][l]);
		}
		printf("\n");
	}
	printf("%d", count);
	return 0;
}