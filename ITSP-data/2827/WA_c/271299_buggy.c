#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;

    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);

    // (xi,yi), where i=1,2,3, are the coordinates of three points
    // we have to check whether these three points lie on a line

    float distance_1=sqrtf(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

    float distance_2=sqrtf(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));

    float distance_3=sqrtf(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));

    // distance(1) is the distance between (x1,y1) and (x2,y2)
    // distance(2) is the distance between (x2,y2) and (x3,y3)
    // distance(3) is the distance between (x1,y1) and (x3,y3)

    if (distance_1+distance_2==distance_3)
    {

        printf("All the points are on same line.");
    }
    else
    {
        printf("All points are not on same line.");
    }

    return 0;
}