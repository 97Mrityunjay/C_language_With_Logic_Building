#include<stdio.h>
void Print_First_N_Natural_Numbers(int);
void Print_First_N_Natural_Numbers_Reverse_Order(int);
void Print_First_N_Odd_Natural_Numbers(int);
void Print_First_N_Odd_Natural_Numbers_Reverse_Order(int);
void Print_First_N_Even_Natural_Numbers(int);
/*Q1. Write a recursive function to print first N natural numbers*/
void Print_First_N_Natural_Numbers(int num)
{
    if(num==0)
     return;
    Print_First_N_Natural_Numbers(num-1);
    printf("%d ",num);
}

/*Q2. Write a recursive function to print first N Natural numbers in reverse order*/
void Print_First_N_Natural_Numbers_Reverse_Order(int num)
{
    if(num==0)
     return;
    printf("%d ",num);
    Print_First_N_Natural_Numbers_Reverse_Order(num-1);
}

/*Q3. Write a recursive function to print first N odd natural numbers*/
void Print_First_N_Odd_Natural_Numbers(int num)
{
    if(num==0)
     return;
    Print_First_N_Odd_Natural_Numbers(num-1);
    printf("%d ",2*num-1);
}

/*Q4. Write a function to print first N odd natural numbers in reverse order*/
void Print_First_N_Odd_Natural_Numbers_Reverse_Order(int num)
{
   if(num==0)
    return;
   printf("%d ",2*num-1);
   Print_First_N_Odd_Natural_Numbers_Reverse_Order(num-1);
}

/*Q5. Write a recursive function to print first N even natural numbers*/
void Print_First_N_Even_Natural_Numbers(int num)
{
    if(num==0)
     return;
    Print_First_N_Even_Natural_Numbers(num-1);
    printf("%d ",2*num);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    Print_First_N_Odd_Natural_Numbers(n);
    return 0;
}