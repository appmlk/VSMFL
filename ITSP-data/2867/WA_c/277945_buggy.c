#include<stdio.h>

int main()
{
    int i,N,s;
    int v=0;
    scanf("%d",&N);
    for (i=0; i<N; i=i+1)
    {
        s=(i*(i+1)/2);
        v=v+s;
    }

    printf("%d",v);
    return 0;
}