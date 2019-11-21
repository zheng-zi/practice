#include <stdio.h>
int main (void)
{
    double x,y;
    printf("Enter x\n");
    scanf("%lf",&x);
    y=0.5+x;
    printf("y=%.1f\n",y);
    return 0;
}