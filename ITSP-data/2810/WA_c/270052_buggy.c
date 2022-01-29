#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;

    scanf("%f %f",&a,&b);/*a and b is in metre*/

    float area = (1.0/2.0)*a*b;/*by pythagorous thoerem*/
    if(area>0)
    {

        printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f.",a,b,a,b,area);
    }
    else
    {
        printf("The area of (%.4f,%.4f), (%.4f,0) and (0,%.4f) is %.4f",a,b,a,b,-1*area);
    }

    return 0;
}