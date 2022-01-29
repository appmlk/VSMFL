#include<stdio.h>
int main()
{
    float a,x,y,r,x1,y1;
    scanf("%f%f%f%f%f",&x,&y,&r,&x1,&y1);
    a=(x-x1)*(x-x1)+(y-y1)*(y-y1)-r*r ;
    if(a==0)
    {
        printf("Point is on the Circle");
    }
    else if(a<0)
    {
        printf("Point is inside the Circle");
    }
    else
    {
        printf("Point is outside the Circle");
    }
    return 0;
}