//Welcome to C programming...Today, we have to calculate the area of the triangle formed by the three points (a,b), (a,0) and (0,b);
#include<stdio.h>

int main()
{


    float a,b;

    scanf("%f %f\n",&a, &b);//It will take the input 'a' & 'b' from user

    float c=0.5*a*b;//Will calculate the area of the triangle

    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,c);


    return 0;
}