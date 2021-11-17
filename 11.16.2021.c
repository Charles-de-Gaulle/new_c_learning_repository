//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//
//	char iput[10] = { 0 };
//	char oput[1000] = { 0 };
//	char arr[10] = { 0 };
//	int count = 0;
//	
//	int m = 0;
//	int n = 0;
//
//	gets(iput);
//	gets(oput);
//	int a = strlen(oput);
//	int b = strlen(arr);
//	int first = a;
//	do
//	{
//		int i = 0;
//		for (m = n; m < a; m++)
//		{
//
//			if (oput[m] != ' ' && oput[m] != '\0')
//			{
//				arr[i] = oput[m];
//				i++;
//			}
//			else
//			{
//				m++;
//				break;
//			}
//		}
//		n = m;
//		if (strcmp(iput, arr) == 0)
//		{
//			count++;
//
//		}
//		int l;
//		for ( l= 0; l <a ; l++)
//		{
//			arr[l] = 0;
//		}
//		if (first > m)
//		{
//			first = m - strlen(iput);
//		}
//	} while (oput[m] != '\0' && oput[m + 1] != '\0');
//
//	if (count == 0)
//	{
//		return -1;
//	}
//	else
//	{
//		printf("%d %d", count, first);
//	}
//}