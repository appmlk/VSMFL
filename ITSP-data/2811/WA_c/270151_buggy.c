#include<stdio.h>

int main()
{
    float a1,b1,a2,b2; /*a1,b1,a2,b2 are variables of the given line */
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);/* values of a1,a2,b1,b2 are given by user */
    float X=(b2-b1)/((b1*a2)-(a1*b2));/* x-coordinate of intersection point*/
    float Y=(a2-a1)/((b1*a2)-(a1*b2));/*y-coordinate of intersection point*/
    if (a1*b2==b1*a2)        /*condition for no intersection*/
    {
        printf("INF");   /*if above boolean exp is true*/
    }
    else
    {
        printf("(%.3f,%.3f)",X,Y);   /*if above boolean exp is false*/
    }

    return 0;
}