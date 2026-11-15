#include <stdio.h>
void sanjiao();
int a,b,c,n;
int main()
{   
    printf("请输入行数：");//自由打印星号的每行的数目和行数（起）
    scanf("%d", &n);
    printf("请输入每行*数:");
    scanf("%d", &b);
    for (a = 1; a <= n; a++)
    {
        for (c = 1; c <= b; c++)
        {
            printf("*");
        }
        printf("\n");
    }//自由打印星号的每行的数目和行数（终）
    sanjiao();
    return 0;
}
    void sanjiao()//输出星号金字塔函数
    {
        printf("请输入行数：");
        scanf("%d", &a);
        for(b=1;b<=a;b++)
        {   
            for(n=1;n<=a-b;n++)
            {
                printf(" ");

            }
            for(n=1;n<=2*b-1;n++)
            {
                printf("*");
            }
        printf("\n");
        }
    }
