#include<stdio.h>

int check_prime(int num);
int check_prime(int num)
{
    int i,j,tmp;
    for(i=num; i>=num; i++)
    {
        for(j=2; j<i/2; j++)
        {
            tmp=1;
            if(i%j==0)
            {
                tmp=1;
                break;
            }
        }
        if(tmp==0)
        {
            continue;
        }
        if((tmp==1)&&(i>1))
        {
            return i;
        }
    }
}


int main()
{
    int N,x;
    scanf("%d",&N);
    x=check_prime(N);
    printf("%d",x);
    return 0;
}