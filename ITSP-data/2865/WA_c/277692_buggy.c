#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        for (int k=5; k>=1; k--)
        {
            if (k==i)
            {
                printf("*");
            }
            else
            {
                printf("%d",k);
            }
        }
        printf("\n");
    }

    return 0;
}