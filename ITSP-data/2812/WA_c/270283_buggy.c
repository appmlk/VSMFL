#include<stdio.h>

int main()
{
    //to determine sign of a number
    float n;
    scanf("%f",&n);
    if(n>0)
    {
        printf("%.4f is positive,%n");//number is positive
    }
    else
    {
        if (n==0)
        {
            printf("input is zero");//number is 0
        }
        else
        {
            printf("%.4f is negative,%n");
        }
    }//number is negative



    return 0;
}