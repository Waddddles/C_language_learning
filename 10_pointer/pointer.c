#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* p = &arr[0];
    int* s = &arr[9];
    printf("%d\n",s-p);
    return 0;

    //指针类型决定了: 指针解引用的权限有多大;指针+-的步长
    //野指针: 局部变量不初始化,默认是随机值

    int* parr[5];//整形指针数组
    

    return 0;
}