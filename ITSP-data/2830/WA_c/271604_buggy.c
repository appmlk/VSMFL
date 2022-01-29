#include<stdio.h>

int main()
{
    // Fill this area with your code.
    int a,b,c,d; //declaring the variables
    int largest;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b==c==d)
    {
        printf("The second largest number is %d",a);
    }
    else
    {
        if((a>=b) && (a>=c) && (a>=d))
        {
            largest=a;
        }
        if((b>=a) && (b>=c) && (b>=d))
        {
            largest=b;
        }
        if((c>=a) && (c>=b) && (c>=d))
        {
            largest=c;
        }
        if((d>=a) && (d>=c) && (d>=b))
        {
            largest=d;
        }
        /*switch(largest)
        {
            case a: if((b>c)&&(b>d))
                        printf("The second largest number is %d",b);
                    if((c>b)&&(c>d))
                        printf("The second largest number is %d",c);
                    if((d>b)&&(d>c))
                        printf("The second largest number is %d",d);
                    break;
            case b: if((a>c)&&(a>d))
                        printf("The second largest number is %d",a);
                    if((c>a)&&(c>d))
                        printf("The second largest number is %d",c);
                    if((d>a)&&(d>c))
                        printf("The second largest number is %d",d);
                    break;
            case c: if((b>a)&&(b>d))
                        printf("The second largest number is %d",b);
                    if((a>b)&&(a>d))
                        printf("The second largest number is %d",a);
                    if((d>b)&&(d>a))
                        printf("The second largest number is %d",d);
                    break;
            case d: if((b>c)&&(b>a))
                        printf("The second largest number is %d",b);
                    if((c>b)&&(c>a))
                        printf("The second largest number is %d",c);
                    if((a>b)&&(a>c))
                        printf("The second largest number is %d",a);
                    break;
        }*/
        if(largest==a)
        {
            if((b>c)&&(b>d))
            {
                printf("The second largest number is %d",b);
            }
            else if((b==c)||(b==d))
            {
                printf("The second largest number is %d",b);
            }
            else if((c>b)&&(c>d))
            {
                printf("The second largest number is %d",c);
            }
            else if((b==c)||(c==d))
            {
                printf("The second largest number is %d",c);
            }
            else if((d>b)&&(d>c))
            {
                printf("The second largest number is %d",d);
            }
            //if((b==c)||(b==d)||(c==d))
            //printf("The second largest number is %d",b);
        }
        if(largest==b)
        {
            if((a>c)&&(a>d))
            {
                printf("The second largest number is %d",a);
            }
            else if((a==c)||(a==d))
            {
                printf("The second largest number is %d",a);
            }
            else if((c>a)&&(c>d))
            {
                printf("The second largest number is %d",c);
            }
            else if((c==a)||(c==d))
            {
                printf("The second largest number is %d",c);
            }
            else if((d>a)&&(d>c))
            {
                printf("The second largest number is %d",d);
            }
            //if((a==c)||(a==d)||(c==d))
            //printf("The second largest number is %d",b);
        }
        if(largest==c)
        {
            if((b>a)&&(b>d))
            {
                printf("The second largest number is %d",b);
            }
            else if((b==a)||(b==d))
            {
                printf("The second largest number is %d",b);
            }
            else if((a>b)&&(a>d))
            {
                printf("The second largest number is %d",a);
            }
            else if((a==b)||(a==d))
            {
                printf("The second largest number is %d",a);
            }
            else if((d>b)&&(d>a))
            {
                printf("The second largest number is %d",d);
            }
            //if((b==a)||(b==d)||(a==d))
            //printf("The second largest number is %d",b);
        }
        if(largest==d)
        {
            if((b>c)&&(b>a))
            {
                printf("The second largest number is %d",b);
            }
            else if((b==c)||(b==a))
            {
                printf("The second largest number is %d",b);
            }
            else if((c>b)&&(c>a))
            {
                printf("The second largest number is %d",c);
            }
            else if((c==b)||(a==c))
            {
                printf("The second largest number is %d",c);
            }
            else if((a>b)&&(a>c))
            {
                printf("The second largest number is %d",a);
            }
            //if((b==c)||(b==a)||(a==c))
            //printf("The second largest number is %d",b);
        }
    }
    return 0;
}