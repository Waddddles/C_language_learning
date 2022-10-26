#include <stdio.h>

//函数指针:存放函数地址的指针

int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 10;
    int* pa = &a;

    char b = 20;
    char* pb = &b;

    int arr[10] = {0};
    int (*parr)[10] = &arr;//指向数组的指针

    //函数指针
    printf("%p\n",&Add);
    printf("%p\n",Add);

    int (*pf1)(int, int) = &Add;
    int (*pf2)(int, int) = &Sub;
    int (*pfarr[2])(int, int) = {Add, Sub};
    
    

    return 0;
}