#include<stdio.h>

int main()
{
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    scanf ("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);// get from user
    float a= (y2-y1)/(x2-x1);
    float b= (y3-y2)/(x3-x2);
    if ( a==b ) /* expression*/
    {
        printf ("All the points are on same line");
    }
    else
    {
        printf ("All the points are not on same line");
    }



    // Fill this area with your code.
    return 0;
}