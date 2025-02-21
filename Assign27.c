#include<stdio.h>
int Sum_Of_First_N_Natural_Numbers(int);
int Sum_Of_First_N_Odd_Natural_Numbers(int);
int Sum_Of_First_N_Even_Natural_Numbers(int);
int Sum_Of_Squares_Of_First_N_Natural_Numbers(int);
int Sum_Of_Digits(int);
/*Q1.Write a recursive function to calculate sum of first N natural numbers*/
int Sum_Of_First_N_Natural_Numbers(int num)
{
    if(num==1)
     return 1;
     return num+Sum_Of_First_N_Natural_Numbers(num-1);
    
}

/*Q2. Write a recursive function to calculate sum of first N odd natural numbers*/
int Sum_Of_First_N_Odd_Natural_Numbers(int num)
{
    if(num==1)
     return 1;
     return Sum_Of_First_N_Odd_Natural_Numbers(num-1)+2*num-1; 
}

/*Q3.Write a recursive function to calculate sum of first N even natural numbers */
int Sum_Of_First_N_Even_Natural_Numbers(int num)
{
    if(num==1)
      return 2;
    return Sum_Of_First_N_Even_Natural_Numbers(num-1)+2*num;   
}

/*Q4.Write a recursion function to calculate sum of squares of first n natural numbers*/
int Sum_Of_Squares_Of_First_N_Natural_Numbers(int num)
{
    if(num==1)
     return 1;
    return Sum_Of_Squares_Of_First_N_Natural_Numbers(num-1)+num*num;
}

/*Q5.Write a recursive function to calculate sum of digits of a given number*/
int Sum_Of_Digits(int num)
{
   if(num)
   {
     return Sum_Of_Digits(num/10)+num%10;
   }
   return 0;
}
int main()
{
    int num,res;
    printf("Enter a number ");
    scanf("%d",&num);
    res=Sum_Of_First_N_Natural_Numbers(num);
    printf("Sum of first %d natural numbers=%d",num,res);
    return 0;
}