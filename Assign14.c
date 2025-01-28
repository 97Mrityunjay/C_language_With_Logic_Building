#include<stdio.h>
//1. Write a program to calculate factorial of a number
/*int main()
{
    int n,num,factorial=1;
    printf("Enter a number ");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        factorial=factorial*num;
        num--;
    }
    printf("Factorial of %d is %d",n,factorial);
    return 0;
}*/

//2. Write a program to count digits in a given number
/*int main()
{
    int n,count=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits=%d",count);
    return 0;
}*/

//3. Write a program to check whether a given number is a prime number or not
/*int main()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n==1)
      printf("Not a prime number");
    else{  
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
         break;
    }
    if(i*i>n)
     printf("Prime number");
    else
     printf("Not a prime number");
    }
    return 0;
}*/

//4. Write a program to calculate LCM of two numbers
/*int main()
{
    int a,b,LCM;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    LCM=a>b?a:b;
    for(;LCM<=a*b;LCM++)
    {
        if(LCM%a==0&&LCM%b==0)
          break;
    }
    printf("LCM of %d and %d is %d",a,b,LCM);
    return 0;
}*/

//5. Write a program to reverse a given number
/*int main()
{
    int n,num,rev;
    printf("Enter a number ");
    scanf("%d",&n);
    for(rev=0,num=n;num!=0;num=num/10)
    {
        rev=rev*10+num%10;
    }
    printf("Reverse of %d is %d",n,rev);
    return 0;
}*/

//6. Write a program which asks user to enter an even number, computer will give user at most three chances,if user failed to answer in any of the chances, "Game Over" message should be displayed on the screen, otherwise "you win" message should be displayed and game stops immediately. Win if even number in any chance.Game Over if Wrong/odd input in all the three chances
int main()
{
    int n,i=1;
    while(i<=3)
    {
        printf("Enter an even number ");
        scanf("%d",&n);
        if((n&1)==0)
          break;
        i++;
    }
    if(i>3)
      printf("Game Over");
    else
      printf("You win");
    return 0;
}