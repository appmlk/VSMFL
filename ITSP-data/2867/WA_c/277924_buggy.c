#include<stdio.h>

int main()
{
    int i,j,N,sum;/*N represents input number*/
    sum=0;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            sum=sum+j;
        }
    }
    printf("%d",sum);
    return 0;
}