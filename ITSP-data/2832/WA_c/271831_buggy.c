#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d%d\n",&a,&b,&c);
    float cA, cB, cC;
    cA=((b*b+c*c-a*a)*1.0)/(2*b*c);
    cB=((a*a+c*c-b*b)*1.0)/(2*a*c);
    cC=((b*b+a*a-c*c)*1.0)/(2*b*a);
    if((c*sqrt(1+cB)<=b)||(a*sqrt(1+cC)<=c)||(b*sqrt(1+cA)<=a))
    {
        if(cA<0.0||cB<0.0||cC<0.0)
        {
            printf("Obtuse Triangle\n");
        }
        else
        {
            if(cA==0.0||cB==0.0||cC==0.0)
            {
                printf("Right Triangle\n");
            }
            else
            {
                if(cA>0.0&&cB>0.0&&cC>0.0)
                {
                    printf("Acute Triangle\n");
                }
            }
        }
    }
    else
    {
        printf("Invalid Triangle\n");
    }
    return 0;
}