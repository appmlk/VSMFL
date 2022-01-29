#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            return 0 ;
        }
    }
    return 1;
}

//Complete function definitions

int main()
{
    int j,n,c;
    int count=0;
    scanf("%d",&n);
    for(j=2; j<=n; j++)
    {
        c=check_prime(j);
        if(c==1)
        {
            c=check_prime(j+2);
            if(c==1)
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);
    //Write your code here

    return 0;
}