#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,x1,y1,s;
    scanf ("%f %f %f %f %f",&x,&y,&x1,&y1,&r);
    s=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    if  (r >s )
    {
        printf ("Point is inside the Circle.");

    }
    else if(r == s)
    {
        printf ("Point is on the Circle.");
    }
    else
    {
        printf ("Point is outside the Circle.");
    }
    return 0;
}