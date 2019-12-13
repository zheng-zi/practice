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
    for(i=0;i<n;i++){
    printf("%d",a[i]);}
    return 0;
}

int fun(int a[],int n)
{
    int i,j,item;
    
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        if(a[j]>a[i])
        {
            item=a[i];
            a[i]=a[j];
            a[j]=item;
        }
    }
}