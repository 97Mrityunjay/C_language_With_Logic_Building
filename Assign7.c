#include<stdio.h>
//1. Write a program to check whether a given number is positive or nonpositive
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Positive");
    }
    else{
       printf("Non-positive");
    }
    return 0;
}*/

//2. Write a program to check whether a given number is divisible by 5 or not
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    (num % 5 == 0) ? printf("%d is divisible by 5",num) : printf("%d is not divisible by 5",num);
    return 0;
}*/

//3. Write a program to check whether a given number is an even number or an odd number
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is an even number",num);
    } 
    else{
        printf("%d is an odd number",num);
    }
}*/

//4. Write a program to check whether a given number is an even number or an odd number without using % operator
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num/2*2==num)
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    return 0;
}

//5. Write a program to check whether the given number is even or odd using a bitwise operator
//checking even or odd program using &(bitwise AND) operator
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if((num&1)==0)
    {
        printf("%d is an even number",num);
    }
    else{
        printf("%d is an odd number",num);
    }
    return 0;
}*/
//checking even or odd program using ^(xor) operator
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if((num^1)==(num-1))
    {
        printf("Odd number");
    }
    else{
        printf("Even number");
    }
    return 0;
}*/
//checking even or odd program using |(bitwise OR) operator
/*int main()
{
    int num,x;
    printf("Enter a number ");
    scanf("%d",&num);
    if((num|1)==(num+1))
    {
        printf("%d is an even number",num);
    }
    else{
      printf("%d is an odd number",num);
    }
    return 0;
} */