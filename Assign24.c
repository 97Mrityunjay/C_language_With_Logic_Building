#include<stdio.h>
#include "Assign23.c"
#include "Assign22.c"
void printPrimeNumbers(int,int);
void printFirstNTermsFibonacciSeries(int);
void printArmstrongNumbers(int,int);
void Sum_Of_First_N_Terms(int);
void Pascal_Triangle(int);
// int factorial(int);
/*Q1.Write a function to print all prime numbers between two given numbers(TSRN)*/
// int isPrime(int n)
// {
//     int divisor=2;
//     while(divisor<n)
//     {
//         if(n%divisor==0)
//          return 0;
//         divisor++;
//     }
//     return 1;
// }
void printPrimeNumbers(int num1,int num2)
{
    int divisor,num;
    for(num=num1+1;num<num2;num++)
    {
        if(isPrime(num))
         printf("%d ",num);
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

/*Q3. Write a function to find the sum of first N terms of series 1!/1+2!/2+3!/3+4!/4+5!/5+....+n!/n(TSRN) */
// int factorial(int num)
// {
//     int f=1;
//     while(num)
//     {
//         f=f*num;
//         num--;
//     }
//     return f;
// }
void Sum_Of_First_N_Terms(int n)
{
   int sum,i;
   for(i=1,sum=0;i<=n;i++)
   {
     sum=sum+(factorial(i))/i;
   }
   printf("Sum of first %d series=%d",n,sum);
}
/*3. Write a function to print PASCAL Triangle*/
void Pascal_Triangle(int lines)
{
    int i,j,n,r;
    for(i=1,n=0;i<=lines;i++,n++)
    {
        for(j=1,r=0;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i && (i+j)%2)
            {
                
                printf("%2d",numberOfCombinations(n,r++));
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
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
/*Q5. Write a function to print PASCAL Triangle*/
int main()
{
    // int num;
    // printf("Enter a number ");
    // scanf("%d",&num);
    // Sum_Of_First_N_Terms(num);
    Pascal_Triangle(6);
    return 0;
}