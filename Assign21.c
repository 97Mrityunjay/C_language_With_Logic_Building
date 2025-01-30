#include<stdio.h>
float Area_Of_Circle(int);
//Q1. Write a function to calculate area of the circle
float Area_Of_Circle(int radius)
{
   return 3.14*radius*radius;
}
int main()
{
    int r;
    float res;
    printf("Enter the radius of a circle ");
    scanf("%d",&r);
    res=Area_Of_Circle(r);
    printf("Area of the circle=%f",res);
    return 0;
}