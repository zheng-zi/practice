#include<stdio.h>
#include <math.h>
int main(void)
{
    
    double a,b,c,d,pi;
    a = 1.0;
    b = 1.0;
    c = 1.0;
    d = 2.0;
    pi = 0;
    while(fabs(b)>=0.0001)
    {
        b = a/c;
        a = -a;
        c = c + d;
        pi = pi + b;
    }
    pi=pi*4;
    printf("pi = %.4f",pi);
    return 0;

}