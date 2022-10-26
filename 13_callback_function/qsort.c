#include <stdio.h>
#include <stdlib.h>

/*
void qsort(void* base,//存放数组首元素地址
           size_t num,//排列数据元素的个数
           size_t size,//排列数据中,一个元素的大小,单位是字节
           int(*cmp)(const void*,const void*))//用来比较待排序数据中的2个元素的函数
*/

void print_arr(int arr[],int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int main()
{
    int arr[] = {1,4,6,7,8,2,3,5,9,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    print_arr(arr, sz);
    return 0;
}