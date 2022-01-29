#include<stdio.h>

int main()
{
    int a,n,N,i,j;//N as an input
    scanf("%d",&N);
    for(j=1; j<=N; j=j+1)
    {
        for(i=1; i<=N; i=i+1)
        {
            if(i+j==6)
            {
                printf("*");
            }
            else
            {
                a=N+1-i;
                printf("%d",a);
            }
        }
        printf("\n");
    }
    //Enter your code here
    return 0;
}