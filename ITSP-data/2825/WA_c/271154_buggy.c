#include<stdio.h>

int main()
{
    float x,y,x1,y1,r,s;//s is for power of point
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    s=(x-x1)*(x-x1)+(y-y1)*(y-y1)-r;//computes the power of point
    if(s>0)       //point is outside if s is +ive
    {
        printf("Point is outside the Circle.");
    }
    if(s==0) //point is on it if s=0
    {
        printf("Point is on the Circle.");
    }
    if(s<0)          //point is inside if s is -ive
    {
        printf("Point is inside the Circle.");
    }
    return 0;
}