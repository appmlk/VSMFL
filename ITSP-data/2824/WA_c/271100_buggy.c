#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0)
    {
        if((year%100==0) && !(year%400==0))
        {
            printf("Not Leap Year");
        }
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }

    // Fill this area with your code.
    return 0;
}