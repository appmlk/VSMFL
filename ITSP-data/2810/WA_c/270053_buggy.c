#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,area;         //initialising the variables
    scanf("%f %f",&a,&b);   //accepting values from user
    area=0.5*abs(a)*abs(b);           //evaluating area
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,area);                             //printing
    return 0;
}