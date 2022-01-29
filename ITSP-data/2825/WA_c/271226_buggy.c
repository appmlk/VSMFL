#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,x1,y1;
    float d,D;/*d=distance squared*/
    scanf("%f%f%f%f%f",&x,&y,&r,&x1,&y1);
    d=((x-x1)*(x-x1))+((y-y1)*(y-y1));/*distance squared*/
    D=sqrtf(d);
    if (D<r)
    {
        printf("Point is inside the Circle");
    }
    if (D==r)
    {
        printf("Point is on the Circle");
    }
    if (D>r)
    {
        printf("Point is outside the Circle");
    }
    return 0;
}