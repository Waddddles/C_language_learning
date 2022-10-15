#include <stdio.h>

int is_leap_year(int x)
{
    return ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0));
}

int main()
{
    int y = 0;
    for (y = 1000; y <= 2000; y++)
    {
        if(is_leap_year(y) == 1)
        {
            printf("%d\n",y);
        }
    }


    return 0;
}