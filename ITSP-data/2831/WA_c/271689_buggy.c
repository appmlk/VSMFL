#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("Revrse of %d is ",a);
    for(int i=a; i!=0; i=i/10)
    {
        int rem=i%10;
        printf("%d",rem);
    }

    return 0;
}