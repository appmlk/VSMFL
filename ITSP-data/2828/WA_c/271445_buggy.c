#include<stdio.h>

int main()
{
    char ch;
    //the character that has to be entered..
    scanf("%c",&ch);
    //input from user
    if(ch>='a'&&ch<='z')
    {
        printf("Small letter");
    }
    //if the character is between a to z
    if(ch>='A'&&ch<='Z')
    {
        printf("Capital letter");
    }
    //if the charater is between A to Z
    if(ch>='0'&&ch<='9')
    {
        printf("Digit");
    }
    //if the character is between 0 to 9
    return 0;
}