#include<stdio.h>

int main()
{
    int n,i,j,k,s=0;
    scanf("%d",&n);
    for (i=1; i<=n; i=i+1)
    {
        for (j=1; j<=n; j=j+1)
        {
            for (k=1; k<=n; k=k+1)
            {
                if (i+j>k&&i+k>j&&j+k>i)
                {
                    s=s+1;

                }


            }

        }



    }
    printf("Number of possible triangles is %d",s);
    return 0;
}