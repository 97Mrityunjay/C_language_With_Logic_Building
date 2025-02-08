#include<stdio.h>
int factorial(int);
int HCF_Of_Two_Numbers(int,int,int);
void Print_First_N_Terms_Of_Fibonacci_Series(int,int,int,int);
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
int HCF_Of_Two_Numbers(int num1,int num2,int HCF)
{
    if(num1%HCF==0&&num2%HCF==0)
    {
        return HCF;
    }
    return HCF_Of_Two_Numbers(num1,num2,HCF-1);
}

/*Q3.Write a recursive function to print first N terms of Fibonacci series*/
void Print_First_N_Terms_Of_Fibonacci_Series(int num,int a,int b,int c)
{
    if(num)
    {
        printf("%d ",c);
        Print_First_N_Terms_Of_Fibonacci_Series(num-1,b,c,b+c);
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
    
    // int num1,num2,min,res;
    // printf("Enter two numbers");
    // scanf("%d%d",&num1,&num2);
    // min=num1<num2?num1:num2;
    // res=HCF_Of_Two_Numbers(num1,num2,min);
    // printf("HCF of %d and %d is %d",num1,num2,res);
    return 0;
}