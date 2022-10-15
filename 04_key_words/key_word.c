#include <stdio.h>
#define ADD(X,Y) X+Y //定义宏
typedef unsigned int u_int; //typedef定义类型


int main()
{
    u_int a = 10;
    printf("%d",ADD(2,3));
}