#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int menu();
void InitBoard(char board[ROW][COL], int r, int c);

void PrintBoard(char board[ROW][COL], int r, int c);
void Playermove(char board[ROW][COL]);
void Computermove(char board[ROW][COL], int r, int c);
char is_win(char board[ROW][COL], int r, int c);