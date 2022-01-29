#include<stdio.h>

int check_prime(int num)
{
    int c=0;
    for(int i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        return num;
    }
    return 1;
}

int main()
{
    int N,j;
    scanf("%d",&N);
    for(int i=2; i<=((N-2)/2); i++)
    {
        if((check_prime(i)!=1)&&(check_prime(N-i)!=1))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}