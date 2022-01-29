#include<stdio.h>

int main()
{
    float a;              //declaring variable a
    scanf("%f",&a);       //inputting a
    if(a>0)
    {
        printf("%.4f is positive.",a);    //checking and printing for positive
    }
    else if(a<0)
    {
        printf("%.4f is negative.",a);    //checking and printing for negative
    }
    else
    {
        printf("input is zero.");    //printing for zero input
    }
    return 0;
}