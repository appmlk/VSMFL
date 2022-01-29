#include<stdio.h>

int main()
{
    float a,b,c,d,e,f;
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);//Taking the input
    if ((c-a)/(d-b)==(e-a)/(f-b))   //Equating their slopes
    {
        printf("All the points are on the same line.");
    }
    else
    {
        printf("All the points are not on the same line.");
    }
    return 0;
}