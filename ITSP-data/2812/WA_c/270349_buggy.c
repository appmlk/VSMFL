#include<stdio.h>

int main()
{
    float n ;         /* variable declaration*/



    scanf("%f",&n);
    printf("%.4f",n);

    if(n<0)
    {
        printf(" %f is negative",n);
    }

    else if(n>0)
    {
        printf("%f is positive",n);
    }

    else
    {
        printf("input is zero");
    }

}