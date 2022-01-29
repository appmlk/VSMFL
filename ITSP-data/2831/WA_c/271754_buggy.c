#include<stdio.h>
int main()
{
    int num,n1,n2,n3,n4,n5;
    scanf("%d",&num);
    n5=num%10;
    n4=((num%100)-n5)/10;
    n3=((num%1000)-n5-(n4*10))/100;
    n2=((num%10000)-n5-(n4*10)-(n3*100))/1000;
    n1=num/10000;
    if(num>=10000)
    {
        printf("Reverse of %d is %d%d%d%d%d",num,n5,n4,n3,n2,n1);
    }
    else if(num>=1000)
    {
        printf("Reverse of %d is %d%d%d%d",num,n5,n4,n3,n2);
    }
    else if(num>100)
    {
        printf("Reverse of %d is %d%d%d",num,n5,n4,n3);
    }
    else if(num>=10)
    {
        printf("Reverse of %d is %d%d",num,n5,n4);
    }
    else if((num==10000)||(num==1000)||(num==100)||(num==10))
    {
        printf("Reverse of %d is 1",num);
    }
    else
    {
        printf("Reverse of %d is %d",num,n5);
    }
    return 0;
}