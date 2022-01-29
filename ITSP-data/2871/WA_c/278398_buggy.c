#include<stdio.h>

int main()
{
    int n,w,h,x,y;
    scanf("%d %d %d",&n,&w,&h);
    for(x=w; x>=1; x--)
    {
        for(y=h; y>=1; y--)
        {
            if(x==1 || y==1 || x==w || y==h)
            {
                printf("%d",n);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}