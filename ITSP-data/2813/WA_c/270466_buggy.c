#include<stdio.h>

int main()
{
    float a1,a2,b1,b2;
    scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
    float c=a1/b1;
    float d=a2/b2;
    float x=((b1-b2)*(a1*a2))/((b1*a2)-(b2*a1));
    float y=((a1-a2)*(b1*b2))/((a1*b2)-(a2*b1));

    if (c==d)
    {
        printf ("INF\n");
    }
    else if (c!=d )
    {
        if (x==0)
        {
            x=0;
        }
        if (y==0)
        {
            y=0;
        }

        printf ("(%.3f,%.3f)",x,y);
    }

    return 0;
}