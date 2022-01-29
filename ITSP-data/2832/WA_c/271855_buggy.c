#include<stdio.h>


int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        if(((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(b*b)))
        {
            printf("Right Triangle");
        }
        else if(((a*a)<(b*b)+(c*c))||((b*b)<(c*c)+(a*a))||((c*c)<(b*b)+(a*a)))
        {
            printf("Obtuse Triangle");
        }
        else if(((a*a)>(b*b)+(c*c))||((b*b)>(c*c)+(a*a))||((c*c)>(b*b)+(a*a)))
        {
            printf("Acute Triangle");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}