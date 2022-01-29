#include<stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}