#include<stdio.h>//水仙花数
int main()
{
    int number,g,s,b;
    printf("输入一个三位数：");
    scanf("%d",&number);
    if(number<100 || number>999)
    {   
        printf("Invalid put,please imput a trinity number\n");
        return 1;
    }
    g=number%10;
    s=number%100/10;
    b=number/100;
    if(g * g * g + s * s * s + b * b * b == number)
    {
    printf("这是一个水仙花数\n");
    }
    else
    {
        printf("这不是一个水仙花数\n");
    }
    return 0;
}