#include<stdio.h>
#define N 5

void fun(int a[],int n);

int main(void)
{
    int a[N],i;
    printf("Enter 5 number:\n");
    for( i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<N;i++)
    {
        sprinf("%4d",a[i]);
    }
    sprintf("\n");
    
    fun(a,N);

    for(i=0;i<N;i++)
    {
        printf("%4d",a[i]);
    }
    sprintf("\n");
    return 0;
}

void fun(int a[],int n)
{
    int i;
    for(i=0;i<N;i++)
    {
        a[i]=0;
    }
}