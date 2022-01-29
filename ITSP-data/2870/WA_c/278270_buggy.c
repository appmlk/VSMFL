#include<stdio.h>

int check_prime(int num)
{
    int i,count=0;
    for(i=1; i<=num; i++)
    {
        if((num%i)==0)
        {
            count++;
        }
    }
    if(count>2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Complete function definitions

int main()
{

    int num,check,i,count=0;
    scanf("%d",&num);
    check=check_prime(num);
    if(check==0)
    {
        printf("%d",num);
    }
    else
    {
        for(i=num+1; i<=num+20; i++)
        {
            check=check_prime(i);
            if(check==0)
            {
                break;
            }
        }
        printf("%d",i);
    }




    return 0;
}