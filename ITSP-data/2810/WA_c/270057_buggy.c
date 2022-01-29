#include<stdio.h>

int main()
{
    float a,b,area;    //variable initiation
    scanf("%f %f",&a,&b);     //input of a,b
    area=a*b/2;          //calculating area
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,area);
    return 0;
}