#include<stdio.h>

int main()
{
    float a1,b1,a2,b2;
    scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
    float x;
    x=(a1*a2)*(b1-b2)/(a2*b1-a1*b2);
    float y;
    y=(b1*b2)*(a1-a2)/(a1*b2-a2*b1);
    if ((a1/a2)==(b1/b2))
    {
        printf("INF");
    }  //condition of parallel lines
    else
    {
        printf("(%.3f,%.3f)",x,y);
    }
    return 0;
}