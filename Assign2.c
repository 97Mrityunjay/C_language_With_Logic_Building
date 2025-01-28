#include<stdio.h>
/*//1. Write a program to calculate average of three integers. Numbers are given by the user.
int main()
{
    int num1, num2, num3;
    float avg;
    printf("Enter three numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg = (num1+num2+num3)/3.0;
    printf("Average of %d, %d and %d is %f",num1,num2,num3,avg);
    return 0;
}*/

/*//2. Write a program to calculate circumference of a circle
int main()
{
    int r;
    printf("Enter radius of the circle ");
    scanf("%d",&r);
    printf("Circumference of the circle is %f",2*3.14*r);
    return 0;
}*/

/*//3. Write a program to calculate simple interest
int main()
{
    float p,r,t;
    float SI;
    printf("Enter principle amount, rate and time ");
    scanf("%f%f%f",&p,&r,&t);
    SI = (p*r*t)/100;
    printf("Simple Interest = %f",SI);
    return 0;
}*/

/*//4. Write a program to calculate volume of a cuboid
int main()
{
    float l,b,h;
    float v;
    printf("Enter length, breadth and height of the cuboid ");
    scanf("%f%f%f",&l,&b,&h);
    v = l*b*h;
    printf("Volume of the cuboid = %f",v);
    return 0;
}*/

//5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
int main()
{
    float cp,sp,profit;
    printf("Enter cost price and selling price of one banana ");
    scanf("%f%f",&cp,&sp);
    profit = sp-cp;
    printf("Profit earned upon selling 25 bananas = %f",profit*25);
    return 0;
} 