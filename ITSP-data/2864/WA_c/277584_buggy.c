#include<stdio.h>
#include<math.h>
int check_prime(int num)
{
    int k;
    for(k=2; k<=sqrt(num); k++)
    {
        if(num%k==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int n1,n2,a;

    scanf("%d %d",&n1,&n2);

    for(a=n1; a<=n2&&a>=n1&&a>1; a++)
    {
        if(check_prime(a)==1)
        {
            printf("%d ",a);
        }
    }

    return 0;
}