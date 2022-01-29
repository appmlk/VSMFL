#include<stdio.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float area=(1/2.0)*a*b;
    float ar=(-1/2.0)*a*b;
    printf("The area of (%.4f,%.4f),",a,b);
    printf("(%.4f,0) and ",a);
    if (area>0)
    {
        printf("(0,%.4f) is %.4f.",b,area);
    }
    else
    {
        printf("(0,%.4f) is %.4f.",b,ar);
    }
    return 0;
}