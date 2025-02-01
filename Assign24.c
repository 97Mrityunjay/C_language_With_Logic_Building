#include<stdio.h>
void printPrimeNumbers(int,int);
void printFirstNTermsFibonacciSeries(int);
void printArmstrongNumbers(int,int);
/*Q1.Write a function to print all prime numbers between two given numbers(TSRN)*/
void printPrimeNumbers(int num1,int num2)
{
    int divisor;
    for(num1=num1+1;num1<num2;num1++)
    {
        for(divisor=2;divisor<num1;divisor++)
        {
            if(num1%divisor==0)
             break;
        }
        if(divisor==num1)
         printf("%d ",num1);
    }
}

/*Q2.Write a function to print first N terms of Fibonacci series(TSRN)*/
void printFirstNTermsFibonacciSeries(int num)
{
    int i,a=-1,b=1,c=0;
    printf("First %d terms of Fibonacci series",num);
    for(i=1;i<=num;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}

/*Q4.Write a function to print all Armstrong numbers between two given numbers(TSRN)*/
void printArmstrongNumbers(int num1,int num2)
{
    int n,sum,countDigit,digit,pow,i;
    for(num1=num1+1;num1<num2;num1++)
    {
        n=num1;
        countDigit=0;
        sum=0;
        while(n)
        {
            n=n/10;
            countDigit++;
        }
        n=num1;
        while(n)
        {
            digit=n%10;
            i=1;
            pow=1;
            while(i<=countDigit)
            {
                pow=pow*digit;
                i++;
            }
            sum+=pow;
            n/=10;
        }
        if(sum==num1)
         printf("%d ",num1);
    }
}

