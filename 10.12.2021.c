//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int islong( char* password)
//{
//	if ((signed)strlen (password)>=8 && (signed)strlen (password) <= 16)
//	{
//		return 1;
//	}
//	else
//	{
//		printf("���ȴ�������������\n");
//		printf(">        --------\n");
//		//printf(">");
//		return 0;
//	}
//}
//int iscont(char* password,int m)
//{
//	int i = 0;
//	for (i = 0; i <=m-1;i++)
//	{
//		if ((isalnum(password[i]))&&i==m-1)
//			return 1;
//		else if(!(isalnum(password[i])))
//		{
//			printf("���ݴ�������������\n");
//			printf(">        --------\n");
//			//printf(">");
//			return 0;
//		}
//
//	}
//}
//int main()
//{
//	printf("�������룬��8~16����ĸ��Сд���������\n");
//	printf(">        --------\n");
//	char password[21] = "0";
//	int a = 0;
//	int b = 0;
//	while(1)
//	{
//		
//		printf(">");
//		//int m = strlen(password);
//		memcpy(&password, gets(password), 20);
//		int m = strlen(password);
//		//scanf("%s", &password);
//		a = islong(password);
//		b = iscont(password,m);
//		if (a && b)
//			break;
//	} 
//	
//	printf("������ȷ");
//	return 0;
//}
////int main()
////{
//	//char arr[5] = "a51c";
//	//printf("%d", strlen(arr));
//	//return 0;
//
////}