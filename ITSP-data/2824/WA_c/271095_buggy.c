#include<stdio.h>

int main()
{

    int year;
    scanf("%d",&year);//to take the value of year from user
    if(year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}