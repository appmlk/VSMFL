#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float x = (1.0/2.0)*abs(a)*abs(b);
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,x);

    return 0;
}