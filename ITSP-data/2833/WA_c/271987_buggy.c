#include<stdio.h>

int main()
{
    int N;
    int i,j,k;
    int count=0;
    scanf("%d",&N);
    for (i=1; i<=N; i++);
    {
        for (j=i; j<=N; j=j+1);
        {
            for (k=j; k<=N; k=k+1);
            {
                if (i+j>k && j+k>i && i+k>j)
                {
                    count=count+1;
                }
            }
        }
    }
    printf ("Number of possible triangles is %d",count);
    return 0;
}