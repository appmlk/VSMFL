#include<stdio.h>
int main()
{
    float a1,b1,a2,b2,x,y;
    scanf("%f,%f,%f,%f",&a1,&b1,&a2,&b2);
    x=((b2-b1)*a1*a2)/((a1*b2)-(a2*b1));
    y=((a1-a2)*b1*b2)/((a1*b2)-(a2*b1));
    if((a1*b2)==(b1*a2))
    {
        printf("INF");
    }
    else
    {
        printf("(%.3f,%.3f)",x,y);
    }
    return 0;
}