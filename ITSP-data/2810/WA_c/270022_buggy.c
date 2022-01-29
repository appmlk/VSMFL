#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    float area;
    scanf("%f",&a);
    printf(" ");
    scanf("%f",&b);

    area=fabs(a*b/2);

    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f",a,b,a,b,area);
    return 0;
}