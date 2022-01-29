#include<stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if ( year%400 == 0)
    {
        printf("Leap Year\n");
    }
    else if ( year%100 == 0)
    {
        printf("Not Leap Year\n");
    }
    else if ( year%4 == 0 )
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap year\n");
    }
    return 0;
}