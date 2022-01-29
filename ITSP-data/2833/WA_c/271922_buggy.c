#include<stdio.h>

int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            for(int k=1; k<=j; k++)
            {
                if((j+k)>i)
                {
                    count=count+1;
                }
                else
                {
                    break;
                }
            }
        }
    }
    printf("Number of possible triangles is %d",count);
    return 0;
}