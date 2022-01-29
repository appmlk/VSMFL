#include<stdio.h>

int main()
{
    float x;
    float y;
    float r;
    float x1;
    float y1;
    float n;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    n=(x-x1)*(x-x1)+(y-y1)*(y-y1)-r*r;
    if ( n < 0 )
    {
        printf("Point is inside the Circle.");
    }
    if ( n > 0 )
    {
        printf("Point is outside the Circle.");
    }
    else
    {
        printf("Point is on the Circle.");
    }
    return 0;
}