#include<stdio.h>

int main()
{
    /*calculation of area of triangle*/
    float a,b;

    scanf("%f%f",&a,&b);
    float height,base,aot;
    height=b;
    base=a;
    aot=1.0000/2*height*base;//area of triangle
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,aot);


    return 0;
}