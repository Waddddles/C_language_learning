#include <stdio.h>

//32位-32跟地址线-物理线-通电-1/0
//64位
int main()
{
    int a = 10;
    printf("%p\n",&a);
    int *pa = &a;//*表示pa是指针变量;int表明a的类型
    *pa = 20;//*pa通过pa里面的地址找到a
    //指针在32位上是32bit占4byte,64位上是64bit占8byte
    return 0;
}