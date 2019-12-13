#include<stdio.h>
#define N 5

int fun(int a[],int n);

int main(void)
{
    int a[N],i,max;
    printf("Enter 5 number:\n");
    for(i=0;i<N;i++)
    {
         scanf("%d",&a[i]);
    }
    max=fun(a,N);
    printf("max is %d\n",max);
    return 0;
}

int fun(int a[],int n)
{
    int i,max;
    for(i=0;i<N;i++)
    {
        if(max<a[i])
        {max=a[i];}
    }
}