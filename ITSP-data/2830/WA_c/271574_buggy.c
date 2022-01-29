#include<stdio.h>

int main()
{
    int a,b,c,d,temp;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(b<a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(c<b)
    {
        temp=c;
        c=b;
        b=temp;
        if(b<a)
        {
            temp=a;
            a=b;
            b=temp;
        }
    }
    if(d<c)
    {
        temp=d;
        d=c;
        c=temp;
        if(c<b)
        {
            temp=c;
            c=b;
            b=temp;
            if(b<a)
            {
                temp=a;
                a=b;
                b=temp;
            }
        }
    }
    printf("%d",c);
    return 0;
}