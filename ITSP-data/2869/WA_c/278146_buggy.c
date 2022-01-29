#include<stdio.h>

int main()
{
    int N;/*defining N as a integer*/
    int i,j;
    scanf ("%d",&N);/*scanning value of N*/
    for (i=1; i<=N; i=i+1)
    {
        for (j=1; j<=N; j=j+1)
            if (i>j)
            {
                printf ("%d",N-i+j);
            }
            else
            {
                printf ("%d\n",N);
            }

    }

    return 0;
}