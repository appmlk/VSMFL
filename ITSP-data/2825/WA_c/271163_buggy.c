#include<stdio.h>
#include<math.h>

int main()
{
    float x, y, r, x1, y1;
    scanf("%f %f %f %f %f",&x,&y,&r,&x1,&y1);
    float A=x-x1;
    float B=y-y1;
    float D,E;
    D=pow(A,2);
    E=pow(B,2);
    float F;
    F=sqrt(D+E);
    if(F>r)
    {
        printf("Point is outside the Circle");
    }
    else if(F<r)
    {
        printf("Point is inside the Circle");
    }
    else
    {
        printf ("Point is on the Circle");
    };
    return 0;
}