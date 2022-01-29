#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2; i<=num-1; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
        else
        {
            continue;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int i=0;
    for(i=0; i<=n-2; i++)
    {
        if ((check_prime(i))&&(check_prime(i+2))==1)
        {
            count++;
        }

    }
    printf("%d",count);
    return 0;
}