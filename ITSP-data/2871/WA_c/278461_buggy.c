#include <stdio.h>

int main()
{
    int N,w,h;
    scanf("%d%d%d",&N,&w,&h);

    if(h>=2&&w>=2)
    {
        int i,j,k;
        for(i=1; i<=w; i++)
        {
            printf("%d",N);
        }
        printf("\n");
        for(j=1; j<=(h-2); j++)
        {
            printf("%d",N);
            for(k=1; k<=(w-2); k++)
            {
                printf(" ");
            }
            printf("%d\n",N);

        }
        for(i=1; i<=w; i++)
        {
            printf("%d",N);
        }
    }
    int l,m;
    if(h==1)
    {
        for(l=1; l<=w; l++)
        {
            printf("%d",N);
        }
    }
    if(w==1)
    {
        for(m=1; m<=h; m++)
        {
            printf("%d\n",N);
        }
    }

    return 0;
}