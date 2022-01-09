//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<ctype.h>
//int count_char(char arr[21])
//{
//	int i = 0;
//	for (i = 0; i < 21; i++)
//	{
//		if (!isdigit(arr[i]))
//		{
//			return i;
//		}
//	}
//	return i;
//}
//
//int find_zero(int pointer,char arr[])
//{
//	int i = 0;
//	int char_count = 0;
//	for (; pointer <20; pointer++)
//	{
//		i++;
//		char_count += arr[pointer];
//		if ((char_count - '0' * i) == 0)
//		{ }
//		else if((char_count - '0' * i != 0)||pointer!=20)
//		{
//			return pointer;
//		}
//	}
//
//}
//int main()
//{
//	char arr[21] = { 0 };
//	int i = 0;
//	int char_count=0;
//	scanf("%s", arr);
//	int count = count_char(arr);
//	int pointer = count-1;
//	
//	
//		for (; pointer >= 0; pointer--)
//		{
//			i++;
//			char_count += arr[pointer];
//			if ((char_count - '0' * i) != 0)
//				printf("%c", arr[pointer]);
//			else if ((char_count - '0' * i) == 0 && pointer == 0)
//				printf("0");
//		}
//		if (count != 20)
//		{
//			printf("%c", arr[count]);
//			if (arr[count] == '.')
//			{
//				pointer = count + 1;
//				int sit = find_zero(pointer, arr);
//				if (sit != 20)
//				{
//					for (pointer = 20; pointer >= sit; pointer--)
//					{
//						if(arr[pointer])
//						printf("%c", arr[pointer]);
//					}
//
//				}
//				else 
//					printf("0");
//			}
//			else
//			{
//				for (pointer = 20; pointer > count; pointer--)
//				{
//					if (arr[pointer])
//					printf("%c", arr[pointer]);
//				}
//			}
//
//		}
//	
//
//		return 0;
//	}