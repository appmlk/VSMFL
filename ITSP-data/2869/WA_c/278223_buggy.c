#include<stdio.h>
int main()
{
    int i=0;
    int N=1,j,k;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        for(j=1; j>0; j--)
        {
            printf("%d",N-j);
        }
        for(k=i; k<N; k++)
        {
            printf("%d",N);
        }
        printf("\n");
    }
}