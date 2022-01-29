#include<stdio.h>
#include<math.h>    //to optimise the program
int check_prime(int num)
{
    int i;
    for(i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{

    int N,i;
    scanf("%d",&N);
    if(N==1)
    {
        printf("%d",N+1);
    }
    for(i=N; i<=N*N; i++)
    {
        if (check_prime(i))
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}