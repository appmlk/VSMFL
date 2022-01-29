#include<stdio.h>

int main()
{
    int i,j,N,w,h;
    scanf("%d%d%d",&N,&w,&h);
    for(i=1; i<=h; i++)
    {
        if(i==1||i==h)
        {
            for(j=1; j<=w; j++)
            {
                printf("%d",N);
            }
        }
        else
        {
            for(j=1; j<=w; j++)
                if(j%2==0)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d",N);
                }
        }
        printf("\n");
    }
    return 0;
}