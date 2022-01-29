#include<stdio.h>

int main()
{
    float x,y,r,x1,y1,a,b,c;
    scanf("%f%f%f%f%f",&x,&y,&r,&x1,&y1);
    a=(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
    b=r*r;
    c=a-b;
    if (c<=0)
    {
        if (c==0)
        {
            printf("Point is on the circle.");
        }
        else
        {
            printf("Point is inside the circle.");
        }
    }
    else
    {
        printf("Point is outside the circle.");
    }
    return 0;
}