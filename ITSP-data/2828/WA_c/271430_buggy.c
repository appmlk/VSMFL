#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>=65 && ch<=91)
    {
        printf("Capital Letter");

    }
    else if(ch>=97 && ch<=122)
    {
        printf("Small Letter");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("Letter");
    }
    return 0;
}