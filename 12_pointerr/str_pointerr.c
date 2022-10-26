#include <stdio.h>

int main()
{
    char ch = 'q';
    char* pc = &ch;

    char* pc1 = 'hello';//本质存储字符串首字符地址

    char str1[] = "hello";
    char str2[] = "hello";
    char* str3 = "hello";
    char* str4 = "hello";//str1 != str2;str3 == str4
    
    

    return 0;
}