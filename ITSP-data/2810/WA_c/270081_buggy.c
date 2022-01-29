#include<stdio.h>

int main()                   /*This program is to calculate the area of                              triangle whose coordinates are (a,b),(a,0)                              and (0,b)*/
{
    float a;
    float b;
    scanf("%f%f", &a, &b); /*Enter the values of a and b*/
    float area;
    area = (a*b)/2;        /*As this triangle is right angled with side                               lengths as a and b units, its area will                                  simply be (a*b)/2 */
    if (area >= 0)         /*This is done so that even with one of a or                              b as negative, the area shown be positive                              .*/
    {
        printf("The area of (%6.4f, %6.4f), (%6.4f,0) and (0,%6.4f) is %6.4f.", a, b, a, b, area);
    }
    else
    {
        printf("The area of (%6.4f, %6.4f), (%6.4f,0) and (0,%6.4f) is %6.4f.", a, b, a, b, area-(area*2));
    }                       /*The absolute value of the area gets                                    printed*/
    return 0;
}