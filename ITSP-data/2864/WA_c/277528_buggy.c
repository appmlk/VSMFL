#include<stdio.h>

int check_prime(int num);
void print_prime(int n1, int n2);

int check_prime(int num)
{
    /* The function returns 1 if num is prime otherwise it return 0 */
    int i; // i: for the iteration in for loop
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            return 0;
            /* if the number would be divisible it won't be prime */
        }
    }
    return 1;
}

void print_prime(int n1, int n2)
{
    /* The function calls function check_prime()
       and prints prime numbers */
    int i; //for the iteration in for loop
    for(i=n1; i<=n2; i++)
    {
        if(check_prime(i))
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int n1,n2; //To store the input limits
    scanf("%d%d",&n1,&n2);//to receive input from user
    print_prime(n1,n2);
    return 0;
}