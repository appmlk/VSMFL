#include<stdio.h>

int check_prime(int num)
{
    int i;
    for(i=2; i<num; i=i+1)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2,a;
    scanf("%d%d",&n1,&n2);
    a=n1;
    while((a>=n1)&&(a<=n2))
    {
        int m;
        m=check_prime(a);
        if (m==1)
        {
            printf("%d ",a);
        }
        a=a+1;
    }

    return 0;
}