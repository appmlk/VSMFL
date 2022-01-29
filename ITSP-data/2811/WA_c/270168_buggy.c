#include<stdio.h>

int main()
{
    float a1,b1,a2,b2;
    scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
    if((a1*b2-a2*b1)==0)
    {
        printf("INF");
    }
    else
    {
        float a=(a1-a2)/(a1*b2-a2*b1);
        float b=(b2-b1)/(a1*b2-a2*b1);
        printf("(%.3f,%.3f)",a,b);
    }

    return 0;
}