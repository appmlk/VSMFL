#include<stdio.h>

int main()
{
    float x,y,r,x1,y1,l;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    l=(x-x1)*(x-x1)+(y-y1)*(y-y1)-(r*r);
    if(l<0)
    {
        printf("Point is inside the Circle.");
    }
    else if(l==0)
    {
        printf("Point is on the Circle.");
    }
    else
    {
        printf("Point is on the Circle.");
    }
    return 0;
}