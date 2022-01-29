#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a>0)
    {
        printf("%.4f is positive %d",a);
    }
    else if(a<0)
    {
        printf( "%0.4f is negative",a);
    }
    else
    {
        printf("input is zero");
    }

    return 0;
}