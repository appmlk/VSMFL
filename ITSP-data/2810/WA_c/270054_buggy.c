#include<stdio.h>

int main()
{
    float a,b,s;
    scanf("%f%f",&a,&b);
    s=(1.0/2.0)*(a*b);
    if (s<0)
    {
        s=-1*(s);
    }
    printf("The area of (%.4f,%.4f),(%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,s);
    return 0;
}