#include "game.h"
#include "game.c"

void meau()
{
    printf("*********************************\n");
    printf("********      1.PLAY     ********\n");
    printf("********      0.EXIT!    ********\n");
    printf("*********************************\n");
}

void game()
{
    char board[ROW][COL];
    //初始化棋盘
    IntiBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    char ret = 0;
    while(1)
    {
        //玩家
        PlayerMove(board, ROW, COL);    
        DisplayBoard(board, ROW, COL);
        ret = Is_Win(board, ROW, COL);
        if(ret != 'C')
        {
            break;
        }

        //电脑
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        ret = Is_Win(board, ROW, COL);
        if(ret != 'C')
        {
            break;
        }
    }
    if (ret = 'O')
    {
        printf("你赢了!\n");
    }
    else if (ret = 'X')
    {
        printf("你输了.\n");
    }
    else
    {
        printf("平局\n");
    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        meau();
        printf("请选择:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("游戏开始咯!\n");
            game();
            break;
        case 0:
            printf("退出游戏!\n");
            break;
        default:
            printf("选择错误,请重新选择\n");
            break;

        }

    }while(input);
    return 0;
}