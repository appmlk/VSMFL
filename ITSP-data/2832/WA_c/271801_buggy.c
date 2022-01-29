#include<stdio.h>

int main()
{
    int a,b,c; /* a,b,c are sides of triangle */
    scanf("%d %d %d",&a,&b,&c);
    if
    ((a+b<c)||(a+c<b)||(b+c<a))
    {
        printf("Invalid Triangle");
    }
    else if  /* Condition for acute triangle */
    (((a*a)<(c*c)+(b*b))&&((b*b)<(a*a)+(c*c))&&((c*c)<(a*a)+(b*b)))
    {
        printf("Acute Triangle");
    }
    else if  /* Condition for right triangle */
    ((b*b)==(a*a)+(c*c)||((c*c)==(b*b)+(a*a))||((a*a)==(b*b)+(c*c)))
    {
        printf("Right Triangle");
    }
    else
    {
        printf("Obtuse Triangle");
    }
    return 0;
}