#include<stdio.h>
#include"../my_define_function/sum.h"//../为退出当前函数所在的文件夹
int main()
{   long a,b;
    printf("请输入两个数求和：");
    scanf("%ld %ld",&a,&b);
    printf("%ld",sum(a,b));
    return 0;
}