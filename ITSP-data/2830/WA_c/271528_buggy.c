#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);//input the numbers
    int g1=a,g2=c,s;
    if(b>a)
    {
        g1=b;
        b=a;
    }//g1 stores greatest and b stores lowest among a and b
    if(d>g2)
    {
        g2=d;
        d=c;
    }//g2 stores greatest and d stores lowest among c and d
    if((g1>g2)&&(b>g2))
    {
        s=b;
    }
    printf("The second largest number is %d",s);
    return 0;
}