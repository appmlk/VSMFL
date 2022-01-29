#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);//input float value a.
    if (a==0)        //Check if a=0.
    {
        printf("input is zero.");   //display of output.
    }

    else
    {
        if (a>0) //using another subcondition to check if a>0 or a<0.
        {
            printf("%.4f is positive.",a);
        }
        else
        {
            printf("%.4f is negative.",a);
        }
    }

    return 0;
}