#include<stdio.h>
int factorial(int);
int numberOfCombinations(int,int);
int numberOfArrangements(int,int);
int f1(int,int);
void primeFactors(int);
//Q1. Write a function to calculate the factorial of a number(TSRS)
int factorial(int n)
{
   int f=1;
   while(n)
   {
      f=f*n;
      n--;
   }
   return f;
}

//Q2. Write a function to calculate the number of combinations one can make from n items and r selected at a time (TSRS)
int numberOfCombinations(int n,int r)
{
   return factorial(n)/(factorial(r)*factorial(n-r));
}

//Q3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time(TSRS)
int numberOfArrangements(int n,int r)
{
    return factorial(n)/factorial(n-r);
}

//Q4. Write a function to check whether a given number contains a given digit or not(TSRS) 
int f1(int num,int digit)
{
   int d;
   while(num)
   {
      d=num%10;
      if(d==digit)
       break;
      num=num/10;
   }
   return num?1:0;
    
}
//Q5. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2,2,3,3(TSRN)
void primeFactors(int num)
{
   int div;
   printf("All prime factors of %d\n",num);
   for(div=2;num!=1;div++)
   {
      for(;num%div==0;num=num/div)
      {
         printf("%d ",div);  
      }
   }   
}
// int main()
// {
//     /*int num,res;
//     printf("Enter a number ");
//     scanf("%d",&num);
//     res=factorial(num);
//     printf("Factorial of %d is %d",num,res);
//      */
    
//     /*
//     int num,r,res;
//     printf("Enter total number of items ");
//     scanf("%d",&num);
//     printf("Enter number of items to be selected at a time ");
//     scanf("%d",&r);
//     res=numberOfCombinations(num,r);
//     printf("Number of possible combinations=%d",res);
//     */

//     /*int num,r,res;
//     printf("Enter total number of items ");
//     scanf("%d",&num);
//     printf("Enter number of items to be selected at a time ");
//     scanf("%d",&r);
//     res=numberOfArrangements(num,r);
//     printf("Number of Arrangements=%d",res);
//     */

//    /*int n,d,res;
//    printf("Enter a number ");
//    scanf("%d",&n);
//    printf("Enter a digit ");
//    scanf("%d",&d);
//    res=f1(n,d);
//    (res==1)?printf("%d contains %d",n,d):printf("%d does not contain %d",n,d);
//    */

//    int num;
//    printf("Enter a number ");
//    scanf("%d",&num);
//    primeFactors(num);
//    return 0;
// }