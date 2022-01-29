#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);     /*scanf helps the user to provide an input*/
    /*Suppose, if input is zero*/
    if(a==0)
    {
        printf("input is zero.");
    }
    /*Suppose, if input is negative*/
    if(a<0)
    {
        printf("%.4f is negative.",a);
    }
    /*Suppose, if input is positive*/
    if(a>0)
    {
        printf("%.4f is positive.",a);
    }

    return 0;
}