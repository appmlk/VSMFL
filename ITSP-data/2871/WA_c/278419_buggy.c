#include<stdio.h>

int main()
{
    int N,w,h;
    scanf("%d %d %d",&N,&w,&h);    //take inputs from the user.
    int i,j;                       //declare any integers i,j.
    if (N==1)
    {
        printf("%d",1);
    }
    else
    {
        for (i=1; i<=h; i++)           //consider a loop for height(h).
        {
            for (j=1; j<=w; j++)         //consider a nested loop for width(w).
            {
                if (i==1)
                {
                    printf("%d",N);    //in first row,print N continously.
                }
                if ((i>1)&&(i<h))          // working in the middle rows.
                {
                    if ((j==1)||(j==w))
                    {
                        printf("%d",N);    //print N in first and last columns.
                    }
                    else
                    {
                        printf(" ");    //leave blank spaces in between.
                    }
                }

                if (i==h)
                {
                    printf("%d",N);    //in last row,print N continously.
                }
            }
            printf("\n");               //start a new line.
        }
    }
    return 0;
}