#include<stdio.h>
int main()
{
    float a1,b1,a2,b2,c1,c2;               //Declaration of the variables
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);     //For input by user
    if(a1/b1==a2/b2||a1==0&&a2==0||b1==0&&b2==0||a1==0&&b1==0||a2==0&&b2==0)                     //If lines are parallel/overlapping
    {
        printf("INF");
    }
    else                                    //If lines are not parallel
    {
        c1=((b1-b2)/(a2*b1-a1*b2));           //Computation of
        c2=((a2-a1)/(a2*b1-a1*b2));           //intersection point
        printf("(%.3f,%.3f)",c1,c2);        //Result
    }
    return 0;                               //The End
}