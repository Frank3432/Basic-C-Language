#include <stdio.h>
int main ()
{
    int x;
    printf("Imput a three digit number:");
    scanf ("%d",&x);
    printf ("百位：%d\n",x/100);
    x = x % 100;
    printf ("十位：%d\n", x / 10);
    printf ("个位：%d\n", x % 10);
    return 0;
}
