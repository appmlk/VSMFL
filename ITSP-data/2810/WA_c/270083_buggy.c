#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,area;
    scanf("%f%f",&a,&b);
    area=abs(0.5*a*b);
    printf("The area of (%6.4f,%6.4f), (%6.4f,0) and (0,%6.4f) is %6.4f.",a,b,a,b,area);
    return 0;
}