#include<stdio.h>

int main()
{
    int N;
    int w;
    int h;
    scanf("%d",&N);
    scanf("%d",&w);
    scanf("%d",&h);
    int a;
    int b;
    for(b=1; b<=h; b++)
    {
        for(a=1; a<=w; a++)
        {
            if(a==1)
            {
                printf("%d",N);
            }
            else if(a==w)
            {
                printf("%d",N);
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }
    return 0;
}