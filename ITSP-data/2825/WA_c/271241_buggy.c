#include<stdio.h>

int main()
{
    float x, y, r, x1, y1;
    scanf("%f %f %f %f %f", &x, &y, &r, &x1, &y1);
    float dsquared = ((x-x1)*(x-x1)) + ((y-y1)*(y-y1));
    if(dsquared < (r*r))
    {
        printf("Point is inside the circle.");
    }
    else if(dsquared > (r*r))
    {
        printf("Point is outside the circle.");
    }
    else
    {
        printf("Point is on the circle.");
    }
    return 0;
}