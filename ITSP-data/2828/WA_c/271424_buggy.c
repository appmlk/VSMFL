#include<stdio.h>

int main()
{
    char C;
    scanf("%c",&C);
    if ('A'<=C<='Z')
    {
        printf("Capital Letter");
    }
    else if ('a'<=C<='z')
    {
        printf("Small Letter");
    }

    return 0;
}