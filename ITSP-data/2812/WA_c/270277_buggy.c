#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a>0)
    {
        printf("%.4f is positive",a);
    }
    if(a==0)
    {
        printf("%f input is zero",a);
    }
    if(a<0)
    {
        printf("%.4f is negative",a);
    }

    return 0;
}