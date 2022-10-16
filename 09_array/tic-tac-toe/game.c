#include "game.h"

void IntiBoard(char broad[ROW][COL], int row , int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row;i++)
    {
        for (j = 0; j < col;j++)
        {
            broad[i][j] = ' ';
        }
    }

}

void DisplayBoard(char broad[ROW][COL], int row , int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", broad[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        if(i < row - 1)
        {    
            int j = 0;
            for (j = 0; j < col;j++)
            {
                printf("---");
                if(j < (col - 1))
                    printf("|");
            }
            printf("\n");
        }   
        
    }

}

void PlayerMove(char broad[ROW][COL], int row , int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走\n");
    while(1)
    {
        printf("坐标(e.g.1 3):");
        scanf("%d %d", &x, &y);
        if(x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if(broad[x - 1][y - 1] == ' ')
            {
                broad[x - 1][y - 1] = 'O';
                break;
            }
            else
            {
                printf("不许下到机器人的子上!");
            }
        }
        else
        {
        printf("你下到棋盘外面了\n");
        }
    
    }
}

void ComputerMove(char broad[ROW][COL], int row , int col)
{
    printf("电脑回合\n");
    while (1)
    {
        int x = rand()%ROW;
        int y = rand()%COL;
        if (broad[x][y] == ' ')
        {
            broad[x][y] = 'x';
            break;
        }    
    }
}

int Is_Full(char broad[ROW][COL], int row , int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; j++)
    {
        if (broad[i][j] == ' ')
        {
            return 0;
        }
    }
    return 1;
}

char Is_Win(char broad[ROW][COL], int row , int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if(broad[i][0] == broad[i][1] && broad[i][1] == broad[i][2] && broad[i][1] != ' ')
        {
            return broad[i][1];
        }
    }
    for (i = 0; i < col; i++)
    {
        if(broad[0][i] == broad[1][i] && broad[1][i] == broad[2][i] && broad[1][i] != ' ')
        {
            return broad[1][i];
        }
    }
    if(broad[0][0] == broad[1][1] && broad[1][1] == broad[2][2] && broad[1][1] != ' ')
    {
        return broad[1][1];
    }
    if(broad[1][3] == broad[2][2] && broad[2][2] == broad[3][1] && broad[2][2] != ' ')
    {
        return broad[1][1];
    }

    int ret = Is_Full(broad, row, col);
    if(ret == 1)
    {
        return 'Q';
    }
    return 'C';
}