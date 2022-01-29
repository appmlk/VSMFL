#include<stdio.h>

int main()
{
    int a,b,c;              //declaring variables for sides of triangle
    scanf("%d",&a);
    scanf("%d",&b);         //inputting sides
    scanf("%d",&c);
    if(((a+b)<c)||((b+c)<a)||((a+c)<b)) //checking for invalid triangle
    {
        printf("Invalid Triangle");
    }
    else if(((c*c)==(a*a+b*b))||((b*b)==(a*a+c*c))||((a*a)==(b*b+c*c)))
    {
        printf("Right Triangle");    //for right triangle
    }
    else if(((c*c)>(a*a+b*b))||((b*b)>(a*a+c*c))||((a*a)>(b*b+c*c)))
    {
        printf("Obtuse Triangle");    //for obtuse triangle
    }
    else
    {
        printf("Acute Triangle");    //for acute triangle
    }
    return 0;
}