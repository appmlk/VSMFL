#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int num,revnum=0;
    scanf("%d",&num);

    do
    {
        revnum=revnum*10;
        revnum=revnum+num%10;
        num=num/10;

    }
    while(num!=0);
    printf("%d",revnum);
    return 0;
}