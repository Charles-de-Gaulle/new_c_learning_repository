#define _CRT_SECURE_NO_WARNINGS
#include"8.22-23.2021_game.h"

//void main()
//{
//	srand((unsigned  int)time(NULL));
//	menu();
//	do
//	{
//		
//		
//		char board[ROW][COL] = { 0 };
//		InitBoard(board, ROW, COL);
//		PrintBoard(board, ROW, COL);
//
//		while (1)
//		{
//			Playermove(board, ROW, COL);
//			PrintBoard(board, ROW, COL);
//			int m = 0;
//			
//			
//			char ret1 = is_win(board, ROW, COL);
//			if (ret1 == '*')
//			{
//				printf("你赢了\n");
//				break;
//			}
//			else if (ret1 == '#')
//			{
//				printf("你输了\n");
//				break;
//			}
//			else if (ret1 == 'Q')
//			{
//				printf("平局\n");
//				break;
//			}
//			else
//				;
//				
//			Computermove(board,ROW,COL);
//			PrintBoard(board, ROW, COL);
//			char ret2 =is_win(board, ROW, COL);
//			if (ret2 == '*')
//			{
//				printf("你赢了\n");
//				break;
//			}
//			else if(ret2=='#')
//			{
//				printf("你输了\n");
//				break;
//			}
//		
//		}
//	} 
//	while (menu());
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		printf("%d", i);
//	return 0;
//}