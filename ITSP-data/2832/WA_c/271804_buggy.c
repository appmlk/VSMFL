#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a+b<=c || b+c<=a || c+a<=b)
    {
        printf ("Invalid Triangle");
    }
    else
    {
        if (a*a==b*b + c*c || b*b==a*a+c*c || c*c==a*a+b*b)
        {
            printf("Right Triangle");
        }
        if (a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
        {
            printf("Obtuse Triangle");
        }
        if (a*a>b*b+c*c && b*b>a*a+c*c && c*c>a*a+b*b)
        {
            printf("Acute Triangle");
        }
    }
    return 0;
}