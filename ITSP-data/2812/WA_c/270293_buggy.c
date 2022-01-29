#include<stdio.h>

int main()
{
    float a; // input variable
    scanf("%f",&a);
    if (a==0)
    {
        printf ("input is zero.");
    }
    else if (a>0)
    {
        printf ("%.4f is positive.",a);
    }
    else
    {
        printf ("%.4f is negative.",a);
    }






    return 0;
}