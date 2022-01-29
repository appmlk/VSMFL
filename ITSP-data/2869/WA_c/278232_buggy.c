#include<stdio.h>

int main()
{
    int i,j;

    int n;
    int k=n;
    scanf("%d",&n);


    for(i=n; i<=n; i=i+1)
    {
        for(j=n; j<=n; j=j+1)
        {
            if(j<i)
            {
                printf("%d",n-i+j);
            }
            else
            {
                printf("%d",n);
            }

        }
        printf("\n");
    }
    return 0;
}