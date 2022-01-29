#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,x1,y1,r;
    scanf("%f %f %f %f %f",&x,&y,&x1,&y1,&r);
    if(r==sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)))
    {
        printf("Point is on the Circle.");
    }
    else
    {
        if(r<sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)))
        {
            printf("Point is outside the Circle.");
        }
        else
        {
            printf("Point is inside the Circle.");
        }

    }
    // Fill this area with your code.
    return 0;
}