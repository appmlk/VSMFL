#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch<='Z'&&ch>='A')//To check for capital letter..
    {
        printf("Capital letter");
    }

    if(ch<='z'&&ch>='a')//To check for small letter..
    {
        printf("Small Letter");
    }

    if(ch>='1'&&ch<='9')//To check for digit..
    {
        printf("Digit");
    }

    return 0;
}