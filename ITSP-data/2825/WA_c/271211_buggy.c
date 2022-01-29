#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;//cordinate of the center of the circle
    float r;// radius of the circle
    float x1,y1;// the another cordinate provided by user
    scanf("%f%f%f%f%f",&x,&y,&r,&x1,&y1);
    float a=(x1-x)*(x1-x);
    float b=(y1-y)*(y1-y);
    float c=a+b;//distance between origen and cordinates providade by user
    float d=sqrtf(c);
    if(c<r)
    {
        printf("Point is inside the Circle.");
    }
    else if(c==r)
    {
        printf("Point is on the Circle.");
    }
    else
    {
        printf("Point is outside the Circle.");
    }
    return 0;
}
