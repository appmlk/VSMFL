#include<stdio.h>

int main()
{
    float x,y;
    /*represent x and y coordinates of intersection point*/
    float a1,b1,a2,b2;
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);
    if((a2/a1)==(b2/b1)||(a1/a2)==(b1/b2))
        /*in case lines are parallel then there is no intersection point*/
    {
        printf("INF");
    }
    else
        /*gives intersection point of the form(x,y)*/
    {
        x=((a1*a2)*(b1-b2))/(b1*a2-b2*a1);
        y=((b1*b2)*(a1-a2))/(a1*b2-a2*b1);
        printf("(%.3f,%.3f)",x,y);
    }

    return 0;
}