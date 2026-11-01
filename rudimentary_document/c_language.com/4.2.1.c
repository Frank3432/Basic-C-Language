#include<stdio.h>//输入整数数字自动从小到大排列
int main()
{
    int a,b,c,x,y,z;
    printf("输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        x=a;   a=b;  b=x;
    }
    if(a>c)
    {
        y=a;   a=c;  c=y;
    }
    if(b>c)
    {
        z=b;   b=c;  c=z;
    }
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}