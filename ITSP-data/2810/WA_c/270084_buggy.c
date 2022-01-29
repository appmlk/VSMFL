#include<stdio.h>
int main()
{
    float a,b;
    //taking input from user
    scanf("%f %f",&a,&b);
    float area=(1.0/2)*a*b; //Area Of Right Triangle is 1/2*base*height
    if (area<0)
    {
        area=-area;
    }
    printf("The area of (%.4f,%.4f),(%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,area);
    return 0;
}