#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c,d;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    if (a>b&&a>c&&a>d)
    {
        if (b>c&&b>d)
        {
            printf("The second largest number is %d",b);
        }
        else
        {
            if (c>d)
            {
                printf("The second largest number is %d",c);
            }
            else
            {
                printf("The second largest number is %d",d);
            }
        }
    }

    else if (b>a&&b>c&&b>d)
    {
        if (a>c&&a>d)
        {
            printf("The second largest number is %d",a);
        }
        else
        {
            if (c>d)
            {
                printf("The second largest number is %d",c);
            }
            else
            {
                printf("The second largest number is %d",d);
            }
        }
    }

    else if (c>b&&c>a&&c>d)
    {
        if (a>b&&a>d)
        {
            printf("The second largest number is %d",a);
        }
        else
        {
            if (b>d)
            {
                printf("The second largest number is %d",b);
            }
            else
            {
                printf("The second largest number is %d",d);
            }
        }
    }

    else if (d>b&&d>c&&d>a)
    {
        if (b>c&&b>a)
        {
            printf("The second largest number is %d",b);
        }
        else
        {
            if (c>a)
            {
                printf("The second largest number is %d",c);
            }
            else
            {
                printf("The second largest number is %d",a);
            }
        }
    }

    return 0;
}