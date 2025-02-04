#include<stdio.h>
void Print_First_N_Even_Natural_Numbers_Reverse_Order(int);
void Print_Squares_Of_First_N_Natural_Numbers(int);
int Binary_Of_Decimal_Number(int);
int Octal_Of_Decimal_Number(int);
int Reverse_Of_Number(int,int);
/*Q1. Write a recursive function to print first N even natural numbers in reverse order*/
void Print_First_N_Even_Natural_Numbers_Reverse_Order(int num)
{
    if(num==0)
     return;
    printf("%d ",2*num);
    Print_First_N_Even_Natural_Numbers_Reverse_Order(num-1);
}
/*Q2. Write a recursive function to print squares of first N natural numbers*/
void Print_Squares_Of_First_N_Natural_Numbers(int num)
{
    if(num==0)
     return;
    Print_Squares_Of_First_N_Natural_Numbers(num-1);
    printf("%d ",num*num);
}
/*Q3. Write a recursive function to print binary of a given decimal number*/
int Binary_Of_Decimal_Number(int num)
{
    if(num==0)
     return 0;
    return Binary_Of_Decimal_Number(num/2)*10+num%2;
}
/*Q4. Write a recursive function to print octal of a given decimal number*/
int Octal_Of_Decimal_Number(int num)
{
    if(num==0)
     return 0;
    return Octal_Of_Decimal_Number(num/8)*10+num%8;
}
/*Q5. Write a recursive function to print reverse of a given number*/
int Reverse_Of_Number(int num,int rev)
{
    if(num==0)
     return rev;
    return Reverse_Of_Number(num/10,rev*10+num%10);
}
int main()
{
  int num,res,rev=0;
  printf("Enter a number ");
  scanf("%d",&num);
  res=Reverse_Of_Number(num,rev);
  printf("Reverse of %d is %d",num,res);
  return 0;
}
