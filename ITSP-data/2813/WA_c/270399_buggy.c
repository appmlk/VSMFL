#include<stdio.h>

int main()
{
    float a1;
    float a2;
    float b1;
    float b2;
    scanf("%f%f%f%f",&a1,&a2,&b1,&b2);
    float x;
    float y;
    x=(a1*a2)*(b1-b2)/(b1*a2-a1*b2);
    y=(b1*b2)*(a1-a2)/(a1*b2-b1*a2);
    if((a1*b2-a2*b1)==0)
    {
        printf("INF");
    }
    else
    {
        printf("(%.3f,%.3f)",x,y);
    }
    return 0;
}