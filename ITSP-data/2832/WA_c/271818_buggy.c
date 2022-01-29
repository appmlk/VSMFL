#include<stdio.h>

int main()
{
    int a,b,c,l;
    scanf("%d%d%d",&a,&b,&c);

    if(a>c)
    {
        l=c;
        c=a;
        a=l;
    }
    if(b>c)
    {
        l=c;
        c=b;
        b=l;
    }
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        if(((a*a)+(b*b))==(c*c))
        {
            printf("Right Triangle");
        }
        else if(((a*a)+(b*b))<(c*c))
        {
            printf("Obtuse Triangle");
        }
        else if(((a*a)+(b*b))>(c*c))
        {
            printf("Right Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}