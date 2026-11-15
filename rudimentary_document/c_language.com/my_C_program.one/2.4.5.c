#include<stdio.h>
#define LOWER (a - b)//但是一般情况下是具体的值
int main()
{
    int c,a,b;
    scanf("%d %d",&a,&b);
    c = LOWER;
    if(c>0 && c < b)
    {
        printf("a > b\n");
        printf("(a - b) < b\n");
    }
    else if(c <= 0)
    {
        printf("a <= b\n");
    }
    else
    printf("(a-b) >= b\n");
    return 0;
} 