#include<stdio.h>

int main()
{
    int i,j,k,sum=0;
    scanf("%d",&j);
    for(i=1; i<=j; i++)
    {
        for(k=1; k<=i; k++);
        sum = sum + k;
    }
    printf("%d",sum);
    //Enter your code here
    return 0;
}