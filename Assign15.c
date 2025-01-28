#include<stdio.h>
//1. Write a program to print all prime numbers under 100
/*int main()
{
    int n=2,div;
    printf("All prime numbers under 100:\n");
    while(n<100)
    {
        div=2;
        while(div*div<=n)
        {
            if(n%div==0)
             break;
            div++;
        }
        if(div*div>n)
         printf("%d ",n);
        n++;
    }
    return 0;
}*/

//2. Write a program to print all prime numbers between two given numbers
/*int main()
{
    int n1,n2,div;
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);
    for(n1=n1+1;n1<n2;n1++)
    {
        for(div=2;div*div<=n1;div++)
        {
            if(n1%div==0)
             break;
        }
        if(div*div>n1)
          printf("%d ",n1);
    }
    return 0;
}*/

//3. Write a program to find next prime number of a given number
/*int main()
{
    int n,div;
    printf("Enter a number ");
    scanf("%d",&n);
    n=n+1;
    while(1)
    {
        div=2;
        while(div*div<=n)
        {
            if(n%div==0)
            break;
            div++;
        }
        if(div*div>n)
        {
          printf("%d",n);
          break;
        }
        n++;
    }
    return 0;
}*/

//4. Write a program to calculate HCF of two numbers
/*int main()
{
    int a,b,divisor,dividend,remainder;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    divisor=a<b?a:b;
    dividend=a>b?a:b;
    remainder=dividend%divisor;
    while(remainder!=0)
    {
        dividend=divisor;
        divisor=remainder;
        remainder=dividend%divisor;
    }
    printf("HCF of %d and %d is %d",a,b,divisor);
    return 0;
}*/

//5. Write a program to check whether two given numbers are co-prime numbers or not
int main()
{
    int a,b,divisor,dividend,remainder;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    divisor=a<b?a:b;
    dividend=a>b?a:b;
    remainder=dividend%divisor;
    while(remainder!=0)
    {
        dividend=divisor;
        divisor=remainder;
        remainder=dividend%divisor;
    }
    if(divisor==1)
     printf("%d and %d are co-prime numbers",a,b);
    else
     printf("%d and %d are not co-prime numbers",a,b);
    return 0;
}