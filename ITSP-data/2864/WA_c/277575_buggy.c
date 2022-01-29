#include<stdio.h>

int check_prime(int num)
{

    for (int j=2 ; j<num ; j++)
    {
        if(num%j==0)
        {
            break ;
        }
        if(num%j!=0)
        {
            if (j==num-1)
            {
                printf("%d ",num) ;
            }
        }
    }
}
int main()
{
    int n1, n2, num, j;
    scanf("%d %d",&n1, &n2);
    if (n1 <=2)
    {
        printf ("%d",n1);
    }
    for (num = n1 ; num <=n2 ; num++)
    {
        check_prime(num);
    }

    return 0 ;
}