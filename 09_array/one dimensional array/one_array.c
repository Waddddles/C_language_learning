#include <stdio.h>

int main()
{
    int arr1[10];
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10}; //完全初始化
    int arr3[10] = {1,2,3,4,5}; //不完全初始化后续为0

    arr1[4] = 5;//下标引用,默认从0开始
    int* p = arr2;
    int i = 0;
    for (i = 0; i<10; i++)
    {
        printf("%d\n",*p);
        p++;
    }


    char ch1[5] = {'d','k'}; //不完全初始化后续为
    char ch2[5] = "dk"; //d k \0 0 0
    char ch3[] = {'d','k'};//两个元素,打印时,一直要遇到\0才停止
    char ch4[] = "dk";//三个元素

    return 0;
}