#include<stdio.h>
int main()
{
    int a=0;
    while(a<=20)
    {   a++;
        if(a%3==0) continue;
        printf("%d \t",a);
    }
    printf("\n");//输出1-20不是3的倍数的数
    {
        a=1;int b=0;
        Plus:b=b+a++;   
        if (a<=100) goto Plus;
        printf("%d\n",b);/*利用goto求1到100的和，但是编辑时尽量少使用*/
    }
    {
        printf("请输入一个整数( )\b\b");//退格的用法
        scanf("%d",&a);
        printf("%d\n",a);
    }
    return 0;
}
