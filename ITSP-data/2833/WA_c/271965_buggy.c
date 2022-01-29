#include<stdio.h>

int main()
{
    int N,a,b,c,count;
    count=0;
    scanf("%d",&N);
    for(a=1; a<=N; a=a+1)
    {
        for(b=1; b<=N; b=b+1)
        {
            for(c=1; c<=N; c=c+1)
            {
                if ((a+b>c)&&(b+c>a)&&(c+a>b))
                {
                    count=count+1;
                }
            }
        }
    }
    printf("Number of possible triangles is %d",count);
    return 0;
}