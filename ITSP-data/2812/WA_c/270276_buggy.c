#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if (a<0)
    {
        printf("%.4f is negative",a);
    }
    if(a==0)
    {
        printf("input is zero",a);
    }
    if(a>0)
    {
        printf("%.4f is positive");
    }
    return 0;
}