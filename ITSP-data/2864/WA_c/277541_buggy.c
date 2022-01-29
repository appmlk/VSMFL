#include<stdio.h>

int check_prime(int num)
{
    int i,c;
    c=1;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            c=c+1;
        }
    }
    if(c==1)
    {
        return num;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int n1,n2,i;
    scanf("%d %d",&n1,&n2);
    for(i=n1; i<=n2; i++)
    {
        if(check_prime(i)!=0)
        {
            printf("%d ",check_prime(i));
        }
    }

    return 0;
}
