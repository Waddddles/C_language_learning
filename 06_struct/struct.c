#include <stdio.h>

struct Book
{
    char name[20];
    float price;
    char id[30];
};

int main()
{
    struct Book a = {"这一生",20,'a'};
    printf("%s %d %lf\n",a.name,a.price,a.id);


    return 0;
}