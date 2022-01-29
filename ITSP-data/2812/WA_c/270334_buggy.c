#include<stdio.h>
#include<math.h>

int main()
{
    float a;
    float b=0;
    scanf("%f",&a);
    if (a<b)
    {
        printf("%f is negative",a);
    }
    if (a>b)
    {
        printf("%f is positive",a);
    }
    if (a==b)
    {
        printf("%f is zero",a);
    }

    return 0;
}