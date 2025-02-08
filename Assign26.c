#include<stdio.h>
void Print_First_N_Even_Natural_Numbers_Reverse_Order(int);
void Print_Squares_Of_First_N_Natural_Numbers(int);
void Binary_Of_Decimal_Number(int);
void Octal_Of_Decimal_Number(int);
void Reverse_Of_Number(int);
/*Q1. Write a recursive function to print first N even natural numbers in reverse order*/
void Print_First_N_Even_Natural_Numbers_Reverse_Order(int num)
{
    if(num>0)
    {
        printf("%d ",2*num);
        Print_First_N_Even_Natural_Numbers_Reverse_Order(num-1);
    }
}
/*Q2. Write a recursive function to print squares of first N natural numbers*/
void Print_Squares_Of_First_N_Natural_Numbers(int num)
{
    if(num>0)
    {
        Print_Squares_Of_First_N_Natural_Numbers(num-1);
        printf("%d ",num*num);
    }
}
/*Q3. Write a recursive function to print binary of a given decimal number*/
void Binary_Of_Decimal_Number(int num)
{
    if(num)
    {
        Binary_Of_Decimal_Number(num/2);
        printf("%d",num%2);
    }
}
/*Q4. Write a recursive function to print octal of a given decimal number*/
void Octal_Of_Decimal_Number(int num)
{
    if(num)
    {
      Octal_Of_Decimal_Number(num/8);
      printf("%d",num%8);
    }
}
/*Q5. Write a recursive function to print reverse of a given number*/
void Reverse_Of_Number(int num)
{
    if(num)
    {
        printf("%d",num%10);
        Reverse_Of_Number(num/10);
    }
}
int main()
{
//   int num,res,rev=0;
//   printf("Enter a number ");
//   scanf("%d",&num);
//   res=Reverse_Of_Number(num,rev);
//   printf("Reverse of %d is %d",num,res);
int n;
printf("Enter a number ");
scanf("%d",&n);
printf("Reverse of %d is ",n);
Reverse_Of_Number(n);
return 0;
}
