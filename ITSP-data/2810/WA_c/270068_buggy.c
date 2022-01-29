#include<stdio.h>
#include<stdlib.h>        // this header file includes the abs() function 
int main()
{
    float a,b,area ;      /* a and b are to take values from user and                                 area gets the calculated area */
    scanf("%f %f",&a,&b);
    area = 0.5*abs(a)*abs(b); /* abs() function gives the absolute value                                  value of a and b.it is used so that area                                  always comes out to positive */
    printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,area);
    return 0;
}