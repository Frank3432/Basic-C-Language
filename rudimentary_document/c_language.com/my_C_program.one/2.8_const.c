#include<stdio.h>
int main()
{
    const long a = 1024;          //不能赋值，所以不可以改变a的值。
    printf("%ld",a);
    return 0;
}