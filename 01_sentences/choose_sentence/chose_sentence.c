#include <stdio.h>

int main()
{
    int input = 0;
    printf("你的选择是是:>");
    printf("宇宙之源(0/1)?>:");
    scanf("%d",&input);

    if (input == 1)
        printf("no\n");
    else
        printf("yes\n");

    return 0;
}