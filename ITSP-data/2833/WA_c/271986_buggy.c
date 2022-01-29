#include<stdio.h>

int main()
{
    int N,d=0;
    float a=1,b=1,c=1,x,y,z;
    scanf("%d",&N);
    for(a=1; a<=N; a++)
    {
        for(b=1; b<=a; b++)
        {
            for(c=1; c<=b; c++)
            {
                x=((a*a)+(b*b)-(c*c))/(2*a*b);
                y=((a*a)+(c*c)-(b*b))/(2*a*c);
                z=((b*b)+(c*c)-(a*a))/(2*b*c);
                if(x<1&&x>-1&&y<1&&y>-1&&z<1&&z>-1&&a>=b&&b>=c&&a>=c)
                    if((x<0&&y>0&&z>0)||(y<0&&x>0&&z>0)||(z<0&&x>0&&y>0)||(x>0&&y>0&&z>0)||(x=0&&y!=0&&z!=0)||(y=0&&x!=0&&z!=0)||(z=0&&x!=0&&y!=0))
                    {
                        d=d+1;
                    }
            }
        }
    }
    printf("Number of possible triangles is %d",d);
    return 0;
}