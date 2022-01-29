#include<stdio.h>
#include<math.h>
int main()
{
    float x, y, r, x1, y1, d;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&r);
    scanf("%f",&x1);
    scanf("%f",&y1);
    d =sqrt(pow(x-x1, 2)+pow(y-y1, 2));
    if (d<r)
    {
        printf("Point is inside the Circle.");
    }
    if (d>r)
    {
        printf("Point is outside the Circle.");
    }
    else
    {
        printf("Point is on the Circle.");
    }

    return 0;
}