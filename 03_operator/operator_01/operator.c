#include <stdio.h>

int main()
{
    int a = 9/2;
    int b = 9/2.0;
    float c = 9/2.0;
    int d = 9%2;
    printf("%d\n%f\n%f\n%d\n\n",a,b,c,d);

    int e = 2;
    int f = e << 1;
    printf("%d\n\n",f);
    
    //sizeof()
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(f));
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));

    

    return 0;
}