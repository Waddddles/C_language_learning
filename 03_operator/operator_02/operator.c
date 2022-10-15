#include <stdio.h>

int main()
{
    int a = 0;
    printf("%d\n",~a);
    
    int b = 10;
    int c = ++b;
    printf("%d\n%d\n\n",b,c);

    int d = 1;
    int e = (d++) + (d++) + (d++);
    printf("%d\n\n",e);

    // && 并,一假全假; || 或,一真全真

    //exp1 ? exp2 : exp3
    int f = 0;
    int g = 1;
    int max =0;
    max = f > g ? f : g;
    printf("%d",max);
    
    //(2,4+5,2+2)逗号表达式,从左到右运算,结果为最右边的值
    
    
    
    return 0;

    
}