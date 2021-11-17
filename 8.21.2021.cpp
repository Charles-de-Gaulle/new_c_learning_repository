#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[] = { 123 };
//	char arr2[] = "abc";
//	printf("%d", sizeof(arr1));
//	printf("%d", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr [3] [4] = { {1,2,3,4},{4,5,6,7}, };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j <4; j++)
//		{
//			//printf("%d ", arr [i] [j]);
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int order(int arr[], int sz)
//{
//	int m = 0;
//	int n = 0;
//	for (m = 0; m < sz - 1; m++)
//	{
//		int f = 1;
//		for (n = 0; n < sz-1-m; n++)
//		{
//		
//			if (arr[n] > arr[n + 1])
//			{
//				
//				int tmp = 0;
//				tmp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = tmp;
//				int f = 0;
//			}
//		}
//		if (f == 1)
//			break;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	order(arr, sz);
//	for (i = 0; i < sz  ; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n%d ", sz);
//	return 0;
//}