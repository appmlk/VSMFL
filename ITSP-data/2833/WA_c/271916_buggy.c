#include<stdio.h>

int main()
{
    int n,count=0,a,b,c;
    scanf("%d",&n);
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n; b++)
        {
            for(c=1; c<=n; c++)
            {
                if((a+b)>c && (a+c)>b && (b+c)>a)
                {
                    count++;
                }
            }
        }
    }
    count=(((count-n)/n)+n);
    printf("Number of possible triangles is %d",count);
    return 0;
}