#include<stdio.h>

int check_prime(int num)
{
    int i,p=0,j=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            break;
        }
        else
        {
            p=p+1;
        }
    }
    if(p==num-2)
    {
        j=1;
    }
    return j;
}


int main()
{
    int a,b,i,j,k=0;
    scanf("%d",&a);
    for(b=2; b<a; b++)
    {
        i=check_prime(b);
        if(b+2<a)
        {
            j=check_prime(b+2);
        }
        if(i==1&&j==1)
        {
            k=k+1;
        }

    }
    printf("%d",k);
    return 0;
}