#include<stdio.h>
#include<stdlib.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);/*co-ordinates of points*/
    if ((y3-y2)/(x3-x2)==(y2-y1)/(x2-x1))
    {
        printf("All the points are on the same line.");
    }
    else
    {
        printf("All the points are not on same line.");
    }
    return 0;
}