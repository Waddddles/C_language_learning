#include <stdio.h>

int find_odds(int a)
{
    int b = a%2;
    if(b == 1)
        printf("%d\n",a);
    else
        return 0;
}


int main()
{
    int i = 1;
    while(i<101)
    {
        find_odds(i);
        i++;
    }
    return 0;
}