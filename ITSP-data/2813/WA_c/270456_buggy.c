#include<stdio.h>

int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f", &a,&b,&c,&d);
    float X=(b-d)*(a*c)/(b*c-a*d);
    float Y=(a-c)*(b*d)/(a*d-b*c);
    float E=a*d-b*c;
    if (E==0)
    {
        printf("INF");
    }
    printf("(%.3f,%.3f)",X,Y);


    return 0;
}