#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2; i<num; i++)
    {
        if((num%i)==0)

        {
            return 0;
        }

    }
    return 1;

}

int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(check_prime(i) && check_prime(n-i) )
        {
            flag=1;
            printf("yes");
            break;
        }

    }
    if(flag==0)
    {
        printf("no");
    }


}