#include<stdio.h>

int main()
{
    int i,N,j;
    scanf("%d",&N);
    for (j=N; j>=1; j=j-1)
    {
        printf("\n");
        for(i=N; i>=1; i=i-1)
        {
            printf("%d",i);
        }
    }
    //Enter your code here
    return 0;
}