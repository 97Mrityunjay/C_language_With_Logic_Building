#include<stdio.h>
float Area_Of_Circle(int);
float Simple_Interest(float,float,float);
void printNaturalNumbers(int);
void printOddNaturalNumbers(int);
int isEvenOdd(int);
//Q1. Write a function to calculate area of the circle(TSRS)
float Area_Of_Circle(int radius)
{
   return 3.14*radius*radius;
}

//Q2.Write a function to calculate simple interest(TSRS)
float Simple_Interest(float p,float r,float t)
{
    float SI;
    SI=(p*r*t)/100;
    return SI;
}

//Q3. Write a function to check whether a given number is even or odd.Return 1 if the number is even,otherwise return 0(TSRS)
int isEvenOdd(int n)
{
    int val;
    val = ((n&1)==0)?1:0;
    return val;
}
//Q4. Write a function to print N natural numbers
void printNaturalNumbers(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}

//Q5. Write a function to print first N odd natural numbers
void printOddNaturalNumbers(int n)
{
   int i;
   for(i=1;i<=n;i++)
   {
      printf("%d ",2*i-1);
   }
}

int main()
{
    /* Calculate the area of circle */
    // int r;
    // float res;
    // printf("Enter the radius of a circle ");
    // scanf("%d",&r);
    // res=Area_Of_Circle(r);
    // printf("Area of the circle=%f",res);
    
    /* Calculate Simple Interest*/
    /*float p,r,t;
    float res;
    printf("Enter principal amount,rate of interest and time ");
    scanf("%f%f%f",&p,&r,&t);
    res=Simple_Interest(p,r,t);
    printf("Simple Interest=%f",res);
    */

    // Check whether number is even or odd
    /*int num,res;
    printf("Enter a number ");
    scanf("%d",&num);
    res=isEvenOdd(num);
    (res==1)?printf("%d is an even number",num):printf("%d is an odd number",num);
    */
   //Print N natural numbers
   /*int num;
   printf("Enter a number ");
   scanf("%d",&num);
   printNaturalNumbers(num);
   */

  //Print first N odd natural numbers
  int num;
  printf("Enter a number ");
  scanf("%d",&num);
  printOddNaturalNumbers(num);
  return 0;
}