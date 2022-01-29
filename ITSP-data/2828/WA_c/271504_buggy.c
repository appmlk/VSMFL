#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if('a'<ch && ch<'z')
    {
        printf("Small Letter");
    }
    else if('0'<ch && ch<'9')
    {
        printf("Digit");
    }
    else if('A'<ch && ch<'Z')
    {
        printf("Capital Letter");
    }
    return 0;
}