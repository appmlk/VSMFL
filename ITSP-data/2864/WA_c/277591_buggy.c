#include<stdio.h>
#include<math.h>
int check_prime(int num)
{
    if(num%2==0||num==1)
    {
        return 0;
    }
    int j,k;
    k=sqrt(num);
    for(j=3; j<=k; j++)
    {
        if(num%j==0)
        {
            return 0;
        }
    }
    return 1;
}
void disp_prime(int a)
{
    printf("%d ",a);
}
void process(int n1,int n2)
{
    int i,c;
    for(i=n1; i<=n2; i++)
    {
        c=check_prime(i);

        if(c!=0)
        {
            disp_prime(i);
        }
    }
}
void ent_num()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    process(n1,n2);
}

int main()
{
    ent_num();
    return 0;
}