#include<stdio.h>

int main()
{
    float x1,x2,x3,y1,y2,y3;
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    if((x3-x1)/(y3-y1)==(x2-x1)/(y2-y1))
    {
        printf("All the points are on same line.");
    }
    else
    {
        printf("All the points are not on the same line.");
    }
    return 0;
}