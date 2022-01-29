#include<stdio.h>
int check_prime(int num)
{
    int i,d;
    d=1;
    for(i=2; i<=(num/2); i++)
    {
        if(num%i==0)
        {
            d=0;
        }
        break;
    }
    if(num==1)
    {
        d=0;
    }
    return d;
}
int main()
{
    int N,i;
    scanf("%d",&N);
    i=N;
    while(i>=N)
    {
        if(check_prime(i)==1)
        {
            break;
        }
        i++;
    }
    printf("%d",i);
    return 0;
}