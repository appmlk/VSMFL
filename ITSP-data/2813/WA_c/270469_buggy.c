#include<stdio.h>

int main()
{
    float a1,a2,b1,b2,x,y;
    scanf("%f",&a1);
    scanf("%f",&a2);
    scanf("%f",&b1);
    scanf("%f",&b2);
    x=(a1*a2*(b1-b2))/(a2*b1-a1*b2);
    y=(b1*b2*(a1-a2))/(a1*b2-a2*b1);
    if(a2*b1!=a1*b2)
    {
        printf("(%0.3f,%0.3f)",x,y);
    }
    else if(a2*b1==a1*b2)
    {
        printf("INF");
    }

    return 0;
}