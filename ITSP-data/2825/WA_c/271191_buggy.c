#include<stdio.h>
int main()
{
    float x,y,r,x1,y1;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    float A=((x-x1)*(x-x1)+(y-y1)*(y-y1));
    if(A<r*r)
    {
        printf("Point is inside the Circle");
    }
    if(A==r*r)
    {
        printf("Point is on the Circle");
    }
    if(A>r*r)
    {
        printf("Point is outside the Circle");
    }
    return 0;
}