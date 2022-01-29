#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int a;
    int b;
    int c;
    int x;
    for(x=0,a=1; a<=N; a=a+1)
    {
        for(b=1; b<=N; b=b+1)
        {
            for(c=1; c<=N; c=c+1)
            {
                if((a+b>c)&&(a+c>b)&&(b+c>a))
                {
                    x=x+1;
                }
            }

        }

    }

    printf("Number of possible triangles is %d",x);

    return 0;
}