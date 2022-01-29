#include<stdio.h>

int main()
{
    //program to generate rectangle like figure
    /*         width
               ----
               3333
               3  3
               3  3  }height
               3  3
               3333      */
    int num,wid,hig,a,b;
    //enter number to be printed
    //width of rectangle
    //height of rectangle
    scanf("%d %d %d",&num,&wid,&hig);
    for(a=1; a<=hig; a++)
    {
        for(b=1; b<=wid; b++)
        {
            if(a==1||a==hig)
            {
                printf("%d",num);
            }
            else if(b==1||b==wid)
            {
                printf("%d",num);
            }

        }
        printf("\n");
    }
    return 0;
}