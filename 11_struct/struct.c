#include <stdio.h>

struct B
{
    char c;
    short s;
    double d;
};

struct Stu
{
    struct B sb;
    char name[20];
    int age;
    char id[20];
};
    

int main()
{
    struct Stu s = {{'W', 20, 3.14}, "张三", 30, "202005034"};

    return 0;
}