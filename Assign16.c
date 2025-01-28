#include<stdio.h>
//1. Write a program to find nth term of the fibonacci series
int main()
{
    int n,a=-1,b=1,c;
    int i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%d",c);
    return 0;
}

//2. Write a program to print first n terms of fibonacci series
/*int main()
{
    int n,a=-1,b=1,c;
    int i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d terms of Fibonacci series\n",n);
    while(i<=n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}*/

//3. Write a program to check whether a given number is there in the Fibonacci series or not
/*int main()
{
    int num,a,b,c,i;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num<0)
      printf("%d is not found in Fibonacci series",num);
    else if(num==1)
      printf("%d is found at 2 and 3 term in Fibonacci series",num);
    else
    {
        for(a=-1,b=1,c=0,i=1;num>=c;i++,c=a+b)
        {
            
            if(num==c)
            {
                printf("%d is found at %d term in Fibonacci series",num,i);
                break;
            }
            a=b;
            b=c;   
        }
        if(num<c)
          printf("%d is not found in Fibonacci Series",num);
    }
    return 0;
}*/

//4. Write a program to check whether a given number is an Armstrong number or not
/*int main()
{
    int num,n,r,pow;
    int count=0,sum=0,i;
    printf("Enter a number ");
    scanf("%d",&num);
    n=num;
    while(n)
    {
        n=n/10;
        count++;
    }
    n=num;
    while(n)
    {
        r=n%10;
        i=1;
        pow=1;
        while(i<=count)
        {
            pow=pow*r;
            i++;
        }
        sum=sum+pow;
        n=n/10;
    }
    if(num==sum)
     printf("%d is an Armstrong number",num);
    else
     printf("%d is not an Armstring number",num);
    return 0;
}*/

//5. Write a program to print all Armstrong numbers under 1000
/*int main()
{
    int n=1,i,r,pow,sum,count;
    printf("All Armstrong numbers under 1000\n");
    while(n<1000)
    {
       int num=n;
       count=0;
       sum=0;
       while(num!=0)
       {
        num=num/10;
        count++;
       }
       num=n;
       while(num!=0)
       {
         r=num%10;
         i=1;
         pow=1;
         while(i<=count)
         {
            pow=pow*r;
            i++;
         }
         sum=sum+pow;
         num=num/10;
       }
       if(n==sum)
        printf("%d ",n);
       n++;
    }
    return 0;
}*/