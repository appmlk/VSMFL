#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b<c)||(a+c<b)||(b+c<a))
    {
        printf("Invalid Triangle");
    }
    else
    {
        if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
        {
            printf("Right Triangle");
        }
        else
        {
            if((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b))
            {
                printf("Obtuse Triangle");
            }
            else
            {
                printf("Acute Triangle");
            }
        }
    }
    return 0;
}