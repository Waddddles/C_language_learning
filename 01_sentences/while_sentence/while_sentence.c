#include <stdio.h>

int main()
{
    int line = 0;
    while (line < 3000)
    {
        printf("go on, you line is:%d\n",line++);
    }

    if(line == 3000)
    printf("Yes,you line is up to %d\n",line);

    return 0;
}