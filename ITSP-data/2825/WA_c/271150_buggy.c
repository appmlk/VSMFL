#include<stdio.h>

int main()
{
    float x, y, r, x1, y1;
    scanf ("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    {
        if ((x1-x)*(x1-x)+(y1-y)*(y1-y)==r*r)
        {
            printf ("Point is on the Circle");
        }
        else if ((x1-x)*(x1-x)+(y1-y)*(y1-y)>r*r)
        {
            printf ("Point is outside the Circle");
        }
        else
        {
            printf ("Point is inside the Circle");
        }
    }
    return 0;
}