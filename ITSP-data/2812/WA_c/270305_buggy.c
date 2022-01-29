#include<stdio.h>

int main()
{
    float input;
    scanf("%f",&input);
    if(input==0)  /** if for 3 possible cases(either > , 0 , = 0) **/
    {
        printf("input is zero");
    }
    else if(input > 0)
    {
        printf("%.4f is positive.",input);   /** .4f for 4 digit decimal place **/
    }
    else if(input < 0)
    {
        printf("%.4f is negative",input);
    }
    return 0;
}