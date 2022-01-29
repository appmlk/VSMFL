#include<stdio.h>

int main()
{
    int N,w,h;
    scanf("%d%d%d",&N,&w,&h);
    int i,j;
    i=1;
    for(i=1; i<=h; i++)
    {
        if(i==1||i==h)
        {
            for(j=1; j<=w; j++);
            printf("%d",N);
        }
        else
        {
            printf("%d",N);
            for(j=2; j<w; j++);
            printf(" ");
            printf("%d",N);
        }
        printf("\n");
    }
    return 0;
}
