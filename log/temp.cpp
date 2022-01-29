#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        cout << endl << "a now is " << a << " at line " << 5 << endl;
        cout << endl << "b now is " << b << " at line " << 5 << endl;
        {
            if(b!=0)
            {
                printf("%d\n",(a+(b/2)/b));
            }
            else
            {
                printf("error\n");
            }
        }
    }
}
