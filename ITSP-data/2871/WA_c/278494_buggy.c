#include<stdio.h>

int main()
{
    int N,w,h,i,j,k,l,m,n;
    scanf("%d",&N);
    scanf("%d",&w);
    scanf("%d",&h);
    if(w==1)
    {
        if(h==1)
        {
            printf("N");
        }
        else
        {
            for(m=0; m<h; m++)
            {
                printf("%d\n",N);
            }
        }
    }
    else
    {
        if(h==1)
        {
            printf("%d",N);
            for(n=0; n<w-2; n++)
            {
                printf(" ");
            }
            printf("%d",N);
        }
        else
        {

            {
                for(i=0; i<w; i++)
                {
                    printf("%d",N);
                }
                printf("\n");
            }


            {
                for(j=0; j<(h-2); j++)
                {
                    printf("%d",N);
                    {
                        for(k=0; k<(w-2); k++)
                        {
                            printf(" ");
                        }
                    }
                    printf("%d\n",N);
                }
            }


            {
                for(l=0; l<w; l++)
                {
                    printf("%d",N);
                }
            }

        }
    }
    return 0;
}