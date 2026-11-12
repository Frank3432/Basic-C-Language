#include<stdio.h>
int main()
{
    int a; double c,b,d;
    printf("b=");
    fflush(stdout);//stdout为标准输出
    scanf("%lf",&b);
    printf("c=");
    fflush(stdout);//fflush为刷新，把缓冲区内容立马显示到屏幕上（部分程序软件需要）
    scanf("%lf",&c);
    printf("请输入数字(1为加,2为减,3为乘法,4为除法):");
    fflush(stdout);
    scanf("%d",&a);
    switch (a)
    {
        case 1:d=b+c;
        printf("b+c=%lf\n",d);
        break;
        case 2:d=b-c;
        printf("b-c=%lf\n",d);
        break;
        case 3:d=b*c;
        printf("b*c=%lf\n",d);
        break;
        case 4:d=b/c;
        if(c==0)
        {
            printf("错误!除数不能为零\n");
            return 1;
        }
        else
        {
            printf("b/c=%lf\n",d);
            break;
        }    
        default:printf("错误，请输入正确的数字\n");
         break;
    }
    return 0;
}