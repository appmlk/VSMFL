#include<stdio.h>

int main()
{
    float a;
    scanf("%f\n", &a);      //to input a float number.
    if(a<0)     //to check if inputed number is negative.
    {
        printf("%.4f is negative.\n", a);    //to print four decimal places
    }
    else        //to check for non-negative number.
    {
        if(a>0)     //to check if inputed number is positive.
        {
            printf("%.4f is positive.\n", a);    //to print four decimal places
        }
        else
        {
            printf("input is zero.\n");    //to print zero.
        }
    }
    return 0;
}