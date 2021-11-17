//#define _CRT_SECURE_NO_WARNINGS 1
//#include"8.22-23.2021_game.h"
//
//int menu()
//{
//
//	printf("****************************\n");
//	printf("*****   1.开始 0.退出  *****\n");
//	printf("****************************\n");
//	printf("请输入:>");
//	int z = 0;
//	scanf("%d", &z);
//	if (z != 1 && z != 0)
//		printf("请重新输入\n");
//	return z;
//
//
//}
//
////初始化棋盘
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
////打印棋盘
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
//}//打印棋盘
////玩家下棋
//void Playermove(char board[ROW][COL])
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入行，列:>");
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
//		printf("位置已被占用，请重新选择:>");
//		goto scanf;
//
//	}
//	printf("玩家走\n");
//
//
//}
////电脑下棋
//void Computermove(char board[ROW][COL],int r,int c)
//{
//	printf("电脑走\n");
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
////判断输赢
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
