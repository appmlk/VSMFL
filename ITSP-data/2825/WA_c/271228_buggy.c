#include<stdio.h>

int main()
{
    float x,y,r,x1,y1,k;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    k=(x-x1)*(x-x1)+(y-y1)*(y-y1)-(r*r);
    if(r>0)
    {
        printf("Point is outside the Circle.");
    }
    else if(r==0)
    {
        printf("Point is on the Circle.");
    }
    else if(r<0)
    {
        printf("Point is inside the Circle.");
    }
    // Fill this area with your code.
    return 0;
}