#include<stdio.h>
#define N 5
int main(void)
{
    int a[N],i,min;
    printf("Enter 5 numbers:\n");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<N;i++){
        if(a[i]<min){
           min=a[i];
        }
    }
    printf("min=%d",min);
    return 0;
}