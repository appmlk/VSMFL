#include<stdio.h>

int main()
{
    float a1,b1,a2,b2;
    scanf("%f %f %f %f",&a1,&b1,&a2,&b2);
    float x,y;

    if(a1*b2==b1*a2)
    {
        printf("INF");
    }
    else
    {
        y=((a1-a2)*(b1*b2))/((a1*b2)-(b1*a2));
        x=((b1-b2)*(a1*a2))/((a1*b2)-(a2*b1));
        printf("(%.3f,%.3f)",-x, -y);
    }

    return 0;
}