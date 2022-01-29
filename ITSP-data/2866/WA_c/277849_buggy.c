#include<stdio.h>
#include<math.h>
int check_prime(int num);
int check_prime(int num)
{
    int i,d;
    i=2;

    while (i<sqrt(num))
    {
        d=num%i;
        if (d==0)
        {
            return 0; //0 if not prime
        }
        else
        {
            i++;
        }
    }
    if (i==num)
    {
        int b=sqrt(num);
        if (i==(b+1))
        {
            return 1;    //1 if prime
        }
    }
    else
    {
        return 0;   //if input is 0 or 1
    }
}

int main()
{
    int n,i,a,b;
    i=2;
    scanf ("%d",&n);
    while (n-2>=i)
    {
        a=check_prime(n-i);
        b=check_prime(i);
        if (a==1 && b==1)
        {
            printf("Yes");
        }
        else
        {
            i++;
        }
    }
    if (i==(n-1))
    {
        printf ("No");
    }
    return 0;
}