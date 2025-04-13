#include<stdio.h>
int LCM_Of_Two_Numbers(int,int);
int HCF_Of_Two_Numbers(int,int);
int isPrime(int);
int nextPrimeNumber(int);
void printFirstNPrimeNumbers(int);
/*Write a function to calculate LCM of two numbers(TSRS)*/
int LCM_Of_Two_Numbers(int num1,int num2)
{
   int LCM;
   for(LCM=num1>num2?num1:num2;LCM<=num1*num2;LCM++)
   {
      if(LCM%num1==0&&LCM%num2==0)
        break;
   }
  return LCM;
}

/*Q2.Write a function to calculate HCF of two numbers*/
int HCF_Of_Two_Numbers(int num1,int num2)
{
    int HCF;
    for(HCF=num1<num2?num1:num2;HCF>=1;HCF--)
    {
        if(num1%HCF==0&&num2%HCF==0)
          break;
    }
    return HCF;
}

/*Q3.Write a function to check whether a given number is prime or not(TSRS)*/
int isPrime(int num)
{
    int divisor;
    for(divisor=2;divisor<num;divisor++)
    {
        if(num%divisor==0)
         break;
    }
    return divisor==num?1:0;
}

/*Q4.Write a function to find the next prime number of a given number(TSRS)*/
int nextPrimeNumber(int num)
{
    int divisor,res;
    // for(;1;)
    // {
    //     for(divisor=2;divisor<num+1;divisor++)
    //     {
    //         if((num+1)%divisor==0)
    //           break;
    //     }
    //     if(divisor==num+1)
    //     {
    //       res=num+1;
    //       break;
    //     }
    //     num++;
    // }
    // return res;
    while(!isPrime(num=num+1));
    return num;
}

/*Q5.Write a function to print first N prime numbers(TSRN)*/
void printFirstNPrimeNumbers(int num)
{
    int n=2,divisor,count;
    printf("First %d prime numbers:\n",num);
    for(;count!=num;)
    {
       if(isPrime(n))
       {
        printf("%d ",n);
        count++;
       }
       n++;
    }
}

// int main()
// {
//   int n,res;
//   printf("Enter a number ");
//   scanf("%d",&n);
//   res=nextPrimeNumber(n);
//   printf("Next prime number of %d is %d",n,res);
//   return 0;
// }