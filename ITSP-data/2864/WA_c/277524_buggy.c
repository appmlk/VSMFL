#include<stdio.h>

int check_prime(int num)
{
    int i;
    for (i=2; i<num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

//Complete the function definitions here.

int main()
{
    int n1,n2,j;
    scanf("%d %d", &n1, &n2);
    if(n1==1)
    {
        n1++;
    }
    for (j=n1; j<=n2; j=j+1)
    {
        if(check_prime(j)==1)
        {
            printf("%d", j);
        }

    }











    return 0;
}