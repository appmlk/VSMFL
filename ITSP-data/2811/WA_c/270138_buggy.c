#include<stdio.h>

int main()
{
    float a1,b1,a2,b2,X,Y;
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);
    if ((a1/a2)==b1/b2)
    {
        printf("INF");
    }
    else
    {
        Y=(a2-a1)/(a2*b1-b2*a1);
        X=(b2-b1)/(b2*a1-b1*a2);
        printf("(%.3f,%.3f)",X,Y);
    }


    return 0;
}