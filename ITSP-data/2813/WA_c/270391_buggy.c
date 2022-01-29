#include<stdio.h>

int main()
{
    float a1,a2,b1,b2,X,Y,s1,s2;
    scanf("%f %f %f %f",&a1,&a2,&b1,&b2);
    X=a1*a2*(b1-b2)/(b1*a2-b2*a1);
    Y=b1*b2*(a1-a2)/(a1*b2-a2*b1);
    if(a1*b2==a2*b1)
    {
        printf("INF");
    }

    else
    {
        printf("(%.3f,%.3f)",X,Y);
    }

    return 0;
}