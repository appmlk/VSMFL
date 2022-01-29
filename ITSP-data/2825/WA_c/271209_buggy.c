#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,x1,y1;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    float m=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    float d=sqrtf(m);
    if(d==r)
    {
        printf("Point is on the circle.");
    }
    else if(d>r)
    {
        printf("Point is outside the circle.");
    }
    else if(d<r)
    {
        printf("Point is inside the circle.");
    }
    return 0;
}