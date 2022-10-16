#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz-1; i++)
    {
        int j = 0;
        for (j = 0; j < sz-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arr1[] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    bubble_sort(arr1, sz);
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        printf("%d ",arr1[i]);
    }
   

    return 0;
}