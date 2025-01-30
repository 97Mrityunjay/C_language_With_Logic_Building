#include<stdio.h>
#include<stdlib.h>
/*Q1. Write a program to find and display grade obtained by a student in test. Grading specifications are follows:
- Marks from 90 to 100: Grade A
- Marks from 80 to less than 90: Grade B
- Marks from 70 to less than 80: Grade C
- Marks from 60 to less than 70: Grade D
- Marks from 50 to less than 60: Grade E
- Marks below 50: Grade F
- Marks Greater than 100 or less than 0: Invalid Marks
*/
/*int main()
{
    int marks;
    printf("Enter marks of a student ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
               printf("Grade A");
               break;
        case 80 ... 89:
               printf("Grade B");
               break;
        case 70 ... 79:
               printf("Grade C");
               break;
        case 60 ... 69:
               printf("Grade D");
               break;
        case 50 ... 59:
               printf("Grade E");
               break;
        case 0 ... 49:
               printf("Grade F");
               break;
        default:
               printf("Invalid Marks");
    }
    return 0;
}*/
/*Q2. Write a menu driven program with following options:
      1.Factorial of a number
      2.Check Even and Odd
      3.Area of a Circle
      4.Sum of First N natural numbers
      5.Exit
 */
/*int main()
{
   int option,num,i,factorial;
   float area;
   int r,sum;
   while(1)
   {
      printf("\n1. Factorial Of a number\n");
      printf("2. Check Even and Odd\n");
      printf("3. Area of circle\n");
      printf("4. Sum of First N natural numbers\n");
      printf("5. Exit\n");
      printf("Enter your choice ");
      scanf("%d",&option);
      switch(option)
      {
         case 1:
            printf("Enter a number ");
            scanf("%d",&num);
            factorial=1;
            for(i=1;i<=num;i++)
            {
               factorial = factorial*i;
            }
            printf("Factorial of %d is %d",num,factorial);
            break;
        case 2:
            printf("Enter a number ");
            scanf("%d",&num);
            if((num&1)==0)
             printf("%d is an even number",num);
            else
             printf("%d is an odd number",num);
            break;
        case 3:
            printf("Enter radius of a circle ");
            scanf("%d",&r);
            area=3.14*r*r;
            printf("Area of Circle=%f",area);
            break;
        case 4:
            printf("Enter a number ",num);
            scanf("%d",&num);
            for(i=1,sum=0;i<=num;i++)
            {
                sum+=i;
            }
            printf("Sum of first %d natural numbers=%d",num,sum);
            break;
        case 5:
             exit(0);
        default:
             printf("Invalid choice\n");    
      }
   }
   return 0;
}*/
//Q3. Write a program to check whether a given character is uppercase alphabet or lowercase alphabet or digit character or some other special character using switch case statements
/*int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A'... 'Z':
             printf("Uppercase Alphabet");
             break;
        case 'a' ... 'z':
             printf("Lowercase Alphabet");
             break;
        case '0' ... '9':
             printf("Digit characters");
             break;
        default:
             printf("Special Characters");
    }
    return 0;
}*/
//4. Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement 
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel");
            break;
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case 'v' ... 'z':  case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case 'V' ... 'Z':
            printf("Consonant");
            break;
        default:
            printf("Special Character");
    }
    return 0;
}
/*
   Q5. Write a menu driven program with following options
       1. Calculate LCM of two numbers
       2. Calculate sum of the digits of a number
       3. Volume of a cuboid
       4.Check whether a given number is prime or not
       5.Exit
 */
/*int main()
{
    int option,num1,num2,LCM;
    int sum,digit,l,b,h,v,div;
    while(1)  
    {
        printf("\n1. Calculate LCM of two numbers\n");
        printf("2. Calculate sum of the digits of a number\n");
        printf("3. Volume of a cuboid\n");
        printf("4. Check whether a given number is Prime or not\n");
        printf("5.Exit\n");
        printf("\n\nEnter your choice ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                 printf("Enter two numbers ");
                 scanf("%d%d",&num1,&num2);
                 for(LCM=num1>num2?num1:num2;LCM<=num1*num2;LCM++)
                 {
                    if(LCM%num1==0&&LCM%num2==0)
                      break;
                 }
                 printf("LCM of %d and %d = %d",num1,num2,LCM);
                 break;
            case 2:
                printf("Enter a number ");
                scanf("%d",&num1);
                num2=num1;
                sum=0;
                while(num2)
                {
                    digit=num2%10;
                    sum+=digit;
                    num2=num2/10;
                }
                printf("Sum of digits of %d = %d",num1,sum);
                break;
            case 3:
                 printf("Enter the length,breadth and height of Cuboid ");
                 scanf("%d%d%d",&l,&b,&h);
                 v=l*b*h;
                 printf("Volume of given Cuboid = %d",v);
                 break;
            case 4:
                 printf("Enter a number ");
                 scanf("%d",&num1);
                 for(div=2;div<num1;div++)
                 {
                    if(num1%div==0)
                      break;
                 }
                 if(div==num1)
                  printf("%d is a prime number",num1);
                 else
                  printf("%d is not a prime number",num1);
                break;
            case 5:
                 exit(0);
            default:
                 printf("Invalid choice!Retry");
        }
    }
    return 0;
}*/

