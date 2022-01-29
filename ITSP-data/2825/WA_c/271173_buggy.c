#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,x1,y1;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);//input x,y,r,x1,y1

    float d=sqrtf((x1-x)*(x1-x)+(y1-y)*(y1-y));
    //compute distance between point and centre of circle

    if ((d==r)||(d<r))
    {
        if (d==r)
        {
            printf("Point is on the Circle.");
        }
        else
        {
            printf("Point is inside the Circle.");
        }
    }
    else
    {
        printf("Point is outside the Cicle.");
    }

    return 0;
}