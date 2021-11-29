#define _CRT_SECURE_NO_WARNINGS 1
//#include<ctype.h>
//#include<stdio.h>
//int main()
//{
//	char arr[14] = { 0 };
//	scanf("%s", arr);
//	int i,count,sum;
//	char c;
//	sum = 0;
//	for (i = 0,count=1; i < 12; i++)
//	{
//		if (isdigit(arr[i]))
//		{
//			sum = sum + (arr[i]-'0') * count;
//			count++;
//		}
//		else
//		{
//			;
//		}
//	}
//	sum = sum % 11;
//	if (sum == 10)
//	{
//		c= 'X';
//	}
//	else 
//	{
//		c=sum+'0';
//	}
//	if (c == arr[12])
//	{
//		printf("Right");
//	}
//	else
//	{
//		arr[12] = c;
//		for (i = 0; i < 13; i++)
//		{
//			printf("%c", arr[i]);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//    int a, b, c, max, min;
//    int fir = 0;
//    int sec = 0;
// 
//    scanf("%d %d %d", &a, &b, &c);
//    max = a;
//    min = a;
//    if (max < b)
//        max = b;
//    if (max < c)
//        max = c;
//    if (min > b)
//        min = b;
//    if (min > c)
//        min = c;
//    fir = max;
//    sec = min;
//    
//    while (fir % sec)
//    {
//        int m= fir % sec;
//        fir = sec;
//        sec = m;
//        
//        
//    }
//    printf("%d/%d", min/sec, max/sec);
//    return 0;
//}