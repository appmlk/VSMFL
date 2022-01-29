#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2; i<=(num-1); i++)
    {
        if(num%i==0)
        {

            return 0;

        }

    }
    return 1;
}

int main()
{
    int i,N,count=0;
    scanf("%d",&N);

    for(i=2; i<=(N-1); i++)
    {
        if ((check_prime(i)==1)&&(check_prime(i+2)==1))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}