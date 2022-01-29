#include<stdio.h>
#include<math.h>                   //to use fabs function.

int main()
{
    float a,b,area;              //declaring variables to take input.
    scanf("%f%f",&a,&b);         //values being enterred.
    area=fabs(0.5*a*b);          //area of right angled triangle=0.5*base                                  *height.
    printf("The area of (% .4f,%.4f), (% .4f,0) and (0,%.4f) is %                  .4f.",a,b,a,b,area);   //printing the output.
    return 0;
}