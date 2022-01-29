#include<stdio.h>
#include<float.h>
int main()
{
    float a,b,c,d,m,x,y;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    m = (c*b - a*d);
    if (m != 0)
    {
        x = (d-b)/m;
        y = (a-c)/m;
        printf("(%.3f,%.3f)",x,y);
    }
    else
    {
        printf("INF");
    }
    return 0;
}