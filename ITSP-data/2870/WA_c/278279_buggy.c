#include<stdio.h>

int check_prime(int num)
{
    if(num==0)
    {
        return 0;
    }
    int i,c=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return num;
}


int main()
{
    int a,b,n,i,c=0,d,x=0;
    scanf("%d",&n);
    a=check_prime(n);
    if(a==0)
    {
        for(i=n+1; 1; i++)
        {
            b=check_prime(i);
            if(b!=0)
            {
                printf("%d",b);
                break;
            }
        }
    }
    else
    {
        printf("%d",a);
    }
    return 0;
}