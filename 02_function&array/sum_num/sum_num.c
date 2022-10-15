#include <stdio.h>

int add(int a,int b)
{
    int z = 0;
    z = a + b;
    return z;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("请输入两个数字(空格分隔):");
    scanf("%d %d",&num1,&num2);
    int sum = add(num1,num2);
    printf("sum:%d\n",sum);
    return 0;
}
