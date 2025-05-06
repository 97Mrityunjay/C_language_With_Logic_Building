#include<stdio.h>
int factorial(int);
int HCF_Of_Two_Numbers(int,int);
void Print_First_N_Terms_Of_Fibonacci_Series(int);
int Count_Digits(int);
int Power_Of_Any_Number(int,int);
/*Q1.Write a recursive function to calculate factorial of a given number*/
int factorial(int num)
{
    if(num==0)
     return 1;
    return num*factorial(num-1);
}

/*Q2.Write a recursive function to calculate HCF of two numbers*/
int HCF_Of_Two_Numbers(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
        {
            return b;
        }
        return HCF_Of_Two_Numbers(a%b,b);
    }
    else if(b>a)
    {
        if(b%a==0)
        {
            return a;
        }
        return HCF_Of_Two_Numbers(a,b%a);
    }
    else
    {
        return b;
    }
}

/*Q3.Write a recursive function to print first N terms of Fibonacci series*/
int fib(int n)
{
    if(n==0||n==1)
     return n;
    else
     return fib(n-1)+fib(n-2);
}
void Print_First_N_Terms_Of_Fibonacci_Series(int num)
{
    if(num>0)
    {
        Print_First_N_Terms_Of_Fibonacci_Series(num-1);
        printf("%d ",fib(num-1));
    }
}

/*Q4.Write a program in c to count the digits of a given number using recursion */
int Count_Digits(int num)
{
    if(num==0)
     return 0;
    return Count_Digits(num/10)+1;
}

/*Q5.Write a program in C to calculate the power of any number using recursion */
int Power_Of_Any_Number(int num,int pow)
{
    if(pow==0)
     return 1;
    return Power_Of_Any_Number(num,pow-1)*num;
}
int main()
{
    /* int n,p,res;
     printf("Enter a number ");
     scanf("%d",&n);
     printf("Enter the power ");
     scanf("%d",&p);
     res=Power_Of_Any_Number(n,p);
     printf("%d to the power %d = %d",n,p,res);
    */
    // int n,res;
    // printf("Enter a number ");
    // scanf("%d",&n);
    // res=Count_Digits(n);
    // printf("Number of digits in %d is %d",n,res);

    // int n,a=-1,b=1,c=0;
    // printf("Enter a number ");
    // scanf("%d",&n);
    // printf("First %d terms of Fibonacci Series\n",n);
    // Print_First_N_Terms_Of_Fibonacci_Series(n,a,b,c);
    
    // int num1,num2,res;
    // printf("Enter two numbers");
    // scanf("%d%d",&num1,&num2);
    // res=HCF_Of_Two_Numbers(num1,num2);
    // printf("HCF of %d and %d is %d",num1,num2,res);
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d terms of fibonacci series\n",n);
    Print_First_N_Terms_Of_Fibonacci_Series(n);
    return 0;
}