#include<stdio.h>

int check_prime(int num)//defining the fuction
{
    int i=1,div;//declaring the variable
    div=num%i;
    while(i<=num-1)//loop
    {
        div=num%i;

        if(div==0)//condition
        {
            return 0 ;
        }
        else
        {
            i=i+1;    //incrementation
        }
    }
    return 1;
}


int main()//main function
{
    int n,check1,check2,x=2,y=0;//declaring the variable
    scanf("%d",&n);


    while(x<=n-2)//loop
    {
        check1=check_prime(x);
        check2=check_prime(n-x);
        if(check1==1&&check2==1)
        {
            y=1;
            printf("Yes");
            break;
        }
        x=x+1;
    }
    if(y==0)//condition
    {
        printf("No");
    }




    return 0;
}