#include<stdio.h>
int main()
{   int a;char b;
    a = 10 >= 9 && 8<50;
    printf("%d\n",a);
    b = 6 && 0;//0为假整体为逻辑假（0）
    printf("%d",b);
    return 0;
}