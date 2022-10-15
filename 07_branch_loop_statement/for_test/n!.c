#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    scanf("%d",&a);
    do
    {
        b *= a;
        a--;
    } while (a > 1);
    printf("%d",b);
    return 0;

}