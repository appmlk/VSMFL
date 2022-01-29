#include<stdio.h>

int main()
{
    int n,a=1,b=1,c=1,i;
    scanf("%d",&n);
    i=0;
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++)
        {
            for(c=1; c<=b; c++)
            {
                if(a+b>c||b+c>a||c+a>b)
                {
                    i++;
                }
            }
        }
    }
    printf("Number of possible triangles is %d",i);
    return 0;
}