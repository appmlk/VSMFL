#include<stdio.h>

int check_prime(int num)
{
    int i;
    for (i=2; i<num; i++)
    {
        if((num%i==0)||(num==1))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2,i;
    scanf ("%d %d",&n1,&n2);
    for (i=n1; i<=n2; i++)
    {
        if (check_prime(i)==1)
        {
            printf ("%d ",i);
        }
    }
    return 0;
}