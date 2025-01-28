#include<stdio.h>
//1. Write a program to check whether a given number is a three digit number or not
/*#include<stdio.h>
int main()
{
   int num;
   printf("Enter a number ");
   scanf("%d",&num);
   if(num>99 && num<=999)
   {
      printf("%d is a three digit number",num);
   }
   else{
     printf("%d is not a three digit number",num);
   }
   return 0;
}*/
//2. Write a program to print greater between two numbers. Print one number if both are same
/*int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    if(a>b)
      printf("%d is greater number",a);
    else
      printf("%d is greater number",b);
    return 0;
}*/

//3. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
/*int main()
{
  int a,b,c,D;
  printf("Enter the value of a,b and c ");
  scanf("%d%d%d",&a,&b,&c);
  D = b*b-4*a*c;
  if(D>0)
  {
    printf("Real and distinct roots");
  }
  else if(D<0)
  {
    printf("Imaginary roots");
  }
  else{
    printf("Real and equal roots");
  }
  return 0;
}*/

//4. Write a program to check whether a given year is a leap year or not
/*int main()
{
  int year;
  printf("Enter a year ");
  scanf("%d",&year);
  if(year%100==0)
  {
    if(year%400==0)
    {
      printf("%d is a leap year",year);
    }
    else{
      printf("%d is not a leap year",year);
    }
  }
  else{
    if(year%4==0)
    {
      printf("%d is a leap year",year);
    }
    else{
      printf("%d is not a leap year",year);
    }
  }
  return 0;
}*/

//5. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times
int main()
{
  int a,b,c;
  printf("Enter three numbers ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
    if(a>c)
     printf("%d is greatest number",a); 
    else
     printf("%d is greatest number",c);
  else if(b>c)
    printf("%d is greatest number",b);
  else
    printf("%d is greatest number",c);
  return 0;
}