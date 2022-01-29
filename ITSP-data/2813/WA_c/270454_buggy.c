#include<stdio.h>

int main()
{
    float a1,b1,a2,b2,x,y;
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);

    /*The x co-ordinate of intersection point is x*/
    x = ((a2*b2*a1)-(a1*b1*a2))/((a1*b2)-(a2*b1));

    /*The y co-ordinate of intersection point is y*/
    y = ((a1*b1*b2)-(a2*b2*b1))/((b2*a1)-(b1*a2));

    /*If the lines intersect, then b1*a2 is not equal to a1*b2*/
    if(a1*b2!=b1*a2&&x!=0&&y!=0)
    {
        printf("(%.3f,%.3f)",x,y);
    }
    else if(a1*b2!=b1*a2&&x==0&&y==0)
    {
        printf("(0.000,0.000)");
    }

    /*In other cases, they do not intersect*/
    if(a1*b2==b1*a2)
    {
        printf("INF");
    }

    return 0;
}