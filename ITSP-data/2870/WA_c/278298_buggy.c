#include<stdio.h>

int check_prime(int num) //Defined a Function called 'check_prime'
{
    int N,x; //Defined 2 Variable,One For Number Other for Division
    N=num;   //Stored Value of Input in N
    x=2;     //Initialised The Value Of X as 2
    for (x=2; x<N;) //Created a Division Process Loop
    {
        if ((N%x)!=0) //If Number is Not Divisble By X, then
        {
            x=x+1;   //Incremented The Value Of X
        }
        else          //Otherwise
        {
            N=N+1;   //Incremented The Value of N
        }
    }
    return x;  //The Output is Returned in x

}

int main()   //Main Body
{

    int A;
    scanf("%d",&A);
    printf("%d",check_prime(A)); //Used The Function for Input 22

    return 0;
}