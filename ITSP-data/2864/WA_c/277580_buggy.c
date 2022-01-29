#include<stdio.h>
/* prg to output all primes between and inclusive of two input              numbers */
int check_prime(int num)
{
    int i;
    for(i = 2; i < num; i++)
    {
        if(num%i == 0||num == 1)
        {
            num = -1;
            goto end;
        }
    }
end:
    return num;
}

int main()
{
    int max, min, prime, num;
    scanf("%d %d", &min, &max);
    if(min > max||min < 0||max < 0)
    {
        printf("Invalid Input.");
    }
    else
    {
        while(min <= max)
        {
            num = min;
            prime = check_prime(num);
            if(prime != -1)
            {
                printf("%d ", prime);
            }
            min = min + 1;
        }
    }
    return 0;
}