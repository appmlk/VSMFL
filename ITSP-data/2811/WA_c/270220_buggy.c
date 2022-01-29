#include<stdio.h>

int main()
{
    float a1,b1,a2,b2,p,q,t,r,s;/*points on line and variables*/
    scanf("%f%f%f%f",&a1,&b1,&a2,&b2);/*input of points on line*/
    p=a2*b1-a1*b2;
    q=b1-b2;
    t=a2-a1;
    r=t/p;
    s=q/p;
    if(p==0)
    {
        printf("INF");
    }
    else
    {
        printf("(%.3f,%.3f)",s,r);
    }
    return 0;
}