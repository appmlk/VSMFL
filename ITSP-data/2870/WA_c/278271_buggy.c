#include<stdio.h>

int check_prime(int num);
int check_prime(int num) //Complete function definitions
{
    int i;
    for(i=2; i<num; i++)
    {
        if(num%i!=0)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return num;
}
int main()
{

    int n,x;
    scanf("%d",&n);
    for(x=n; x>=n; x++)
    {
        if (check_prime(x))
        {
            break;
        }
        else
        {
            continue;
        }
    }
    printf("%d",x);
    return 0;
}