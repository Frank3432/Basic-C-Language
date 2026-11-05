#include<stdio.h>
int main()
{
    int a; double c,b,d;
    printf("请输入两个数字：");
    scanf("%lf %lf",&b,&c);
    printf("请输入数字(1为加,2为减,3为乘法,4为除法):");
    scanf("%d",&a);
    switch (a)
    {
        case 1:d=b+c;
        printf("和：%lf\n",d);
        break;
        case 2:d=b-c;
        printf("差：%lf\n",d);
        break;
        case 3:d=b*c;
        printf("积：%lf\n",d);
        break;
        case 4:d=b/c;
        if(c==0)
        {
            printf("错误!除数不能为零\n");
            return 1;
        }
        else
        {
            printf("商：%lf\n",d);
            break;
        }    
        default:printf("错误，请输入正确的数字\n");
            break;
    }
    return 0;
}