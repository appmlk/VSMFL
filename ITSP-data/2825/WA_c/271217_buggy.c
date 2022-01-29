#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,x1,y1,d,e;
    scanf ("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    d = (x-x1)*(x-x1)+(y-y1)*(y-y1);
    e = sqrt(d);
    if
    (e<r)
    {
        printf("Point is inside the Circle");
    }
    else if
    (e==r)
    {
        printf("Point is on the Circle");
    }
    else if
    (e>r)
    {
        printf("Point is outside the Circle");
    }
    return 0;
}