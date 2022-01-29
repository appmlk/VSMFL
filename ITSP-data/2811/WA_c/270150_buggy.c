#include<stdio.h>

int main()
{
    float a1,b1,a2,b2;
    float X,Y;
    scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
    if(a1*b2-a2*b1!=0)
    {
        X=(b1-b2)/(a2*b1-a1*b2);
        Y=(a2-a1)/(a2*b1-a1*b2);
        printf("(%.3f,%.3f)",X,Y);


    }
    else
    {
        printf("INF");
    }
    return 0;
}