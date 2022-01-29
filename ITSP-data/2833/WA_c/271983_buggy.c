#include<stdio.h>

int main()
{
    int N;
    int a,b,c;
    a=1;
    b=1;
    c=1;
    int count=0;
    scanf("%d", &N);
    while(a<=N)
    {
        b=1;
        while(b<=N)
        {
            c=1;
            while(c<=N)
            {
                if(a<b+c||b<a+c||c<a+b)
                {
                    count+=1;
                }
                c+=1;
            }
            b+=1;
        }
        a+=1;
    }
    printf("Number of possible triangles is %d", count);
    return 0;
}