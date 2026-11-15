#include <stdio.h>
#include <math.h>
int main ()
{
    double c,d;
    scanf ("%lf %lf",&c,&d);
    double _c;
    _c = 2.0e-3;
    if(fabs(c-d) <= _c)
    {
        printf ("c = d\n");
    }    
    else
    {
        printf ("c != d\n");
    }
    return 0;
}