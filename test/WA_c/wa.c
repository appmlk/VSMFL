#include<stdio.h>
int main()
{
    int x, y = 1;
    scanf("%d", &x);
    for(int i = 0; i < x; i++) {
        y = y + x; // 应为y*x
    }
    printf("%d\n", y);
}