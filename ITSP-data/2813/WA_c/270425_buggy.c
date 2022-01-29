#include<stdio.h>

int main()
{
    float a1,b1,a2,b2,x,y;
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);/*taking values from user*/


    if((a2/a1)==(b2/b1))
    {
        printf("INF");
    }
    else
    {
        x=(b1-b2)*a1*a2/(b1*a2-a1*b2);

        y=(a2-a1)*b1*b2/(b1*a2-a1*b2);
        printf("(%.3f,%.3f)",x,y);
    }
}