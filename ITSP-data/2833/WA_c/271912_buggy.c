#include<stdio.h>

int main()
{
    int n,c=0,x,y,z;
    scanf("%d",&n);
    for(x=1; x<=n; x=x+1)
    {
        for(y=1; y<=x; y=y+1)
        {
            for(z=1; z<=y; z=z+1)
            {
                if(x+y>z && y+z>x && z+x>y)
                {
                    c++;
                }
            }
        }
    }
    printf("Number of possible triangle is %d",c);
    return 0;

}