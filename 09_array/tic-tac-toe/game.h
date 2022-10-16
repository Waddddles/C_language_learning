#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3


void IntiBoard(char broad[ROW][COL], int row , int col);
//打印棋盘
void DisplayBoard(char broad[ROW][COL], int row , int col);
//玩家下棋
void PlayerMove(char broad[ROW][COL], int row , int col);
//电脑下棋
void ComputerMove(char broad[ROW][COL], int row , int col);

char Is_Win(char broad[ROW][COL], int row , int col);
