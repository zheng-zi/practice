#include<stdio.h>

#define N 5

int fun(int a[],int n);

int main(void)
{
     int a[N],i,n;
    printf("Enter 5 number:\n");
    for(i=0;i<N;i++)
    {
         scanf("%d",&a[i]);
    }
    fun(a,N);
    int j,t,min;
    for(i=0;i<n;i++)
    {
         min=a[i];
         for(j=i+1;j<=n;j++)
         {
            if(min>a[j])
            {
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);}
        return 0;
}
int fun(int a[],int n)
{
    int i,min;
    for(i=0;i<N;i++)
    {
        if(min<a[i])
        {
            min=a[i];
        }
    }
}