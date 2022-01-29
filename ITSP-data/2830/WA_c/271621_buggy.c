#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);        //input 4 numbers.
    int second;
    if(a<b)
    {
        int s=a;
        a=b;
        b=s;
    }
    if(c<d)
    {
        int s=c;
        c=d;
        d=s;
    }
    if(b<c)
    {
        int s=b;
        b=c;
        c=s;
    }
    if(a<b)
    {
        int s=a;
        a=b;
        b=a;
    }
    if(b<c)
    {
        int s=b;
        b=c;
        c=s;
    }
    if(c<d)
    {
        int s=c;
        c=d;
        d=c;
    }
    printf("The second largest number is %d",b);
    return 0;
}