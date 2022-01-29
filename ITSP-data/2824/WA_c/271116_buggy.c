#include<stdio.h>

int main()
{
    int y;//y as year
    scanf("%d",&y);
    if (y%100==0 && y%400==0)//Leap Year,if y divisible by 100 & 400 both
    {
        printf("Leap Year");
    }
    else if (y%4==0) //Leap Year,if y divisible just by 4
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}