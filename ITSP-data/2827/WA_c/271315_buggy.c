#include<stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,area;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    area=((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2);
    if(area==0)
    {
        printf("All the points are on the same line.");
    }
    else
    {
        printf("All the points are not on same line.");
    }
    return 0;
}