#include<stdio.h>

int main()
{
    int a,x;
    scanf("%d",&a);//input a(while initialisation)
    int f=a;
    while(a>0)//while condition
    {
        int d=a%10;//to get one digit
        x=x*10+d;
        a=a/10;//while updation
    }
    printf("Reverse of %d is %d",f,x);
    return 0;
}