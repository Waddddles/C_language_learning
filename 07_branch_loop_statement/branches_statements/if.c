#include <stdio.h>

int main()
{
    int age = 10;
    if(age >= 18)
        printf("成年\n");
    else
    {//多个语句需要添加大括号
        printf("未成年\n");
        printf("禁止恋爱\n");
    }
    //if(num = 5)X,有时会不报错   
    //if(5 = num),肯定报错
    
    
    return 0;
}