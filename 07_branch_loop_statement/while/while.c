#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 10)
    {
        if (i == 5)
        {
            break;//如果是continue的话,跳过后续继续while循环
        }
        printf("%d\n",i);
        i++;

    }
    
}