#include<stdio.h>

int main()
{
    char ch;               //declaration of the character to be input
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')  //Test for small letter
    {
        printf("Small Letter");
    }
    else if(ch>='A'&& ch<='Z')  //Test for capital letter
    {
        printf("capital Letter");
    }
    else if(ch>='0' && ch<='9')  //Test for digit
    {
        printf("Digit");
    }

    return 0;
}