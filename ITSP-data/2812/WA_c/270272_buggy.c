#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a==0)
    {
        printf("input is zero");
    }
    else
    {
        if(a<0)
        {
            printf("%.4f",a);
        }
        printf(" is negative");

        printf("%.4f",a);
        printf(" is positive");
    }
    return 0;
}