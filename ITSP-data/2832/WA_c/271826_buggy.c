#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); //  Scan the sides of triangle

    if(a+b>c && b+c >a && a+c>b)
    {
        if(a*a+b*b-c*c==0 || b*b+c*c-a*a==0 || a*a+c*c-b*b==0)
        {
            printf("Right Triangle");
        }
        else if(a*a+b*b -c*c> 0 && b*b+c*c-a*a >0 && a*a+c*c-b*b>0)
        {
            printf("Acute Triangle");
        }
        else if(a*a+b*b-c*c <0 && b*b+c*c<a*a && a*a+c*c<b*b)
        {
            printf("Obtuse Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }

    return 0;
}
