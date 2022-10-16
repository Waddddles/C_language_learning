#include <stdio.h>

int main()
{
    int arr1[3][4];
    int arr2[3][4] = {1,2,3,4,5,6,7};//不完全初始化
    int arr3[3][4] = {{1,2},{3,4},{4,5}};//不完全初始化
    int arr4[][4] = {{1,2},{3,4},{4,5}};//行可省略,列不可

    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }


    int* p = &arr3[0][0];
    for (i = 0; i < 12; i++)
    {
        printf("%d ",*p);
        p++;
    }

    return 0;
}