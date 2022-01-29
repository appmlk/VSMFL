#include<stdio.h>
int main()
{
    float a1,b1,a2,b2,x,y;
    scanf("%f %f %f %f", &a1,&b1,&a2,&b2);
    if (((a1*b2)-(b1*a2))!=0)
    {
        x=((b2-b1)/((a2*b1)-(a1*b2)));
        y=((a2-a1)/((a1*b2)-(b1*a2)));
        printf("(%.3f,%.3f)",x,y);
    }
    else
    {
        printf("INF");
    }
    return 0;
}