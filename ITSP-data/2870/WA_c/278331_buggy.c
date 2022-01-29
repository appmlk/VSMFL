#include<stdio.h>

int check_prime(int num)
{
    int a;
    for(a=2; a<=num/2; a++)
    {
        if(num%a==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int N,c,p;
    scanf("%d",&N);
    for(p=N; p<=N*2; p++)
    {
        c=check_prime(p);
        if(c==0)
        {
            break;
        }
    }
    printf("%d",p);
    return 0;
}