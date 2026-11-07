#include <stdio.h>
void printTable();
int main()
{
    printTable(); // 请在此处编写您的 C 语言源代码
    return 0;
}
void printTable()
{
    int a, b, c; 
    for(a=1,b=1;a < 10;)
    {   c=a*b;
        if(a >= b)
        {
         printf("%d*%d=%d\t",a,b,c); 
         b++;   
        }
        else
        {
            printf("\n");
            a++;
            b=1;
        }
    }
}    