#include<stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    if(x>'A'&&x<'Z')
    {
        printf("Capital Letter");
    }
    if(x>'0'&&x<'9')
    {
        printf("Digit");
    }
    if(x>'a'&&x<'z')
    {
        printf("Small Letter");
    }
    return 0;
}