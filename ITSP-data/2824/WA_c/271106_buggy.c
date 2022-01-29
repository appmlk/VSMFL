#include<stdio.h>

int main()
{
    int y;
    scanf("%d",&y);
    if (y%4==0)
    {
        if ((y%100==0)&&(y%400==0))
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}