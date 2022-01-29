#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if(((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2)))
    {
        printf("All the points are on same line.");
    }
    else
    {
        printf("All the points are not on same line.");
    }
    return 0;
}

