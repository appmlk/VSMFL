#include<stdio.h>

int check_prime(int num)
{
    int i=1;
    for(i=2; i<num; i=i+1)
    {
        if (num%i==0)
        {
            return(0);    /* not a prime number */
        }
    }

    return(1); /* its a prime number */

}

int main()
{
    int n1,n2,i,result;   /* result here denotes if the given number is                                    prime or not */
    scanf("%d %d ",&n1,&n2);
    for(i=n1; i<=n2; ++i)
    {
        result=check_prime(i); /*calls for the function */
        if (result==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}