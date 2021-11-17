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
//		printf("长度错误，请重新输入\n");
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
//			printf("内容错误，请重新输入\n");
//			printf(">        --------\n");
//			//printf(">");
//			return 0;
//		}
//
//	}
//}
//int main()
//{
//	printf("输入密码，由8~16个字母大小写，数字组成\n");
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
//	printf("输入正确");
//	return 0;
//}
////int main()
////{
//	//char arr[5] = "a51c";
//	//printf("%d", strlen(arr));
//	//return 0;
//
////}