#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r;
    float x1;
    float y1;
    float h;
    float g;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);/*input*/
    h=(x1-x)*(x1-x)+(y1-y)*(y1-y);
    g=sqrt(h);/*distance formula*/
    printf("%f demo\n",g);
    if(g<r)/*condition for point to be inside the circle*/
    {
        printf("Point is inside the Circle.");
    }
    else if(g==r)/*condition for point to be on the circle*/
    {
        printf("Point is on the Circle.");
    }
    else
    {
        printf("Point is outside the Circle.");
    }
    return 0;
}