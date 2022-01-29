#include<stdio.h>

int main()
{
    int N,w,h;
    scanf("%d%d%d",&N,&w,&h);
    int i,j;
    for (i=1; i<=h; i++)
    {
        for (j=1; j<=w; j++)
        {
            if ((j==1)||(j==w))
            {
                printf("%d",N);
            }
            else
            {
                if ((i==1)||(i==h))
                {
                    printf("%d",N);
                }
                else
                {
                    printf(" ");
                }
            }
        }

    }
    return 0;
}