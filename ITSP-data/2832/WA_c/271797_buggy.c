#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    if (a <= b)
    {
        if(b >= c)
        {
            max =b;
        }
        else
        {
            max=c;
        }
    }
    else
    {
        if (a <= c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
    }
    if ((a+b+c-(2*max))<=0)
    {
        printf("Invalid Triangle");
    }
    if ((a+b+c-(2*max))>=0)
    {
        if ((a*a)+(b*b)+(c*c)==(2*max*max))
        {
            printf("Right Triangle");
        }
        else if((a*a)+(b*b)+(c*c)>=(2*max*max))
        {
            printf("Acute Triangle");
        }
        else if((a*a)+(b*b)+(c*c)<=(2*max*max))
        {
            printf("Obtuse Triangle");
        }
    }

    return 0;
}