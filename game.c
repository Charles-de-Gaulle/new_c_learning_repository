//#define _CRT_SECURE_NO_WARNINGS 1
//#include"8.22-23.2021_game.h"
//
//int menu()
//{
//
//	printf("****************************\n");
//	printf("*****   1.��ʼ 0.�˳�  *****\n");
//	printf("****************************\n");
//	printf("������:>");
//	int z = 0;
//	scanf("%d", &z);
//	if (z != 1 && z != 0)
//		printf("����������\n");
//	return z;
//
//
//}
//
////��ʼ������
//void InitBoard(char board[ROW][COL], int r, int c)
//{
//	int m = 0;
//		for (m = 0; m < r; m++)
//		{
//			int n = 0;
//			for (n = 0; n < c; n++)
//			{
//				board[m][n] = ' ';
//			}
//
//		}
//
//}
//
////��ӡ����
//void PrintBoard(char board[ROW][COL], int r, int c)
//{
//	int i = 0;
//
//	for (i = 0; i < r ; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < c ; j++)
//		{
//		
//			printf(" %c ", board[i][j]);
//			if (j != c - 1)
//				printf("|");
//			else
//				printf("\n");
//		
//		}
//		for (j = 0; j < c; j++)
//		{
//
//			printf("---");
//			if (j != c - 1)
//				printf("|");
//			else
//				printf("\n");
//
//		}
//	}
//
//}//��ӡ����
////�������
//void Playermove(char board[ROW][COL])
//{
//	int a = 0;
//	int b = 0;
//	printf("�������У���:>");
//	scanf:
//	scanf("%d %d", &a, &b);
//	a = a - 1;
//	b = b - 1;
//	if (board[a][b] == ' ')
//	{
//		board[a][b] = '*';
//	}
//	else
//	{
//		printf("λ���ѱ�ռ�ã�������ѡ��:>");
//		goto scanf;
//
//	}
//	printf("�����\n");
//
//
//}
////��������
//void Computermove(char board[ROW][COL],int r,int c)
//{
//	printf("������\n");
//
//	while (1)
//	{
//		int x = 0;
//		int y = 0;
//		x = rand() % r;
//		y = rand() % c;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
//
////�ж���Ӯ
//char is_win(char board[ROW][COL], int r, int c)
//{
//	int i = 0;
//	
//	for (i = 0; i < r; i++)
//	{
//		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
//		{
//			return board[i][0];
//		}
//	}
//	int j = 0;
//	for (j = 0; j < c; j++)
//	{
//		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
//		{
//			return board[0][j];
//		}
//	}
//	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
//	{
//		return board[1][1];
//	}
//	if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]))
//	{
//		return board[1][1];
//	}
//	int m = 0;
//	for (m = 0; m < r; m++)
//	{
//		int n = 0;
//		for (n = 0; n < r; n++)
//		{
//			if (board[m][n] == ' ')
//				return 'C';
//		}
//	}
//	return 'Q';
//}
//
//
