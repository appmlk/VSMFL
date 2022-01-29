#include<stdio.h>

int check_prime(int num)
{
    int i;
    for (i=2; i<num; i++)
    {

        if (num%i!=0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    i=i-1;
    if (num%i!=0)
    {
        return 1;    //for prime
    }
    else
    {
        return 0;
    }
}

int check_sum_of_primes (int a)
{

    int m;
    int n ;
    for (m=2; m<a; m++)
    {
        n=a-m;
        if(check_prime(m)&&check_prime(n))
        {
            return 1;
        }
        else
        {
            continue;
        }
    }
    return 0;
}


int main()
{

    int p;
    scanf("%d",&p);

    if (check_sum_of_primes(p))
    {

        printf("Yes");
    }
    else
    {

        printf("No");
    }


    return 0;
}