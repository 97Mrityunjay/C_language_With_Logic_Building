#include<stdio.h>
/*//1. Write a program to input a character from the user and print its ASCII code
int main()
{
   char ch;
   printf("Enter a character ");
   scanf("%c",&ch);
   printf("ASCII code of '%c' is %d",ch,ch);
   return 0;
}*/

/*//2. Write a program to input an ASCII code from the user and print its corresponding character
int main()
{
   int ASCII_Code;
   printf("Enter an ASCII Code ");
   scanf("%d",&ASCII_Code);
   printf("Corresponding Character of ASCII Code %d is '%c'",ASCII_Code,ASCII_Code);
   return 0;
} */

/*//3. Write a program to input three characters from the user and display characters with their corresponding ASCII codes
int main()
{
   char ch1,ch2,ch3;
   printf("Enter three characters ");
   scanf("%c %c %c",&ch1,&ch2,&ch3);
   printf("Characters with their Corresponding ASCII Codes:\n");
   printf("%c %d",ch1,ch1);
   printf("\n%c %d",ch2,ch2);
   printf("\n%c %d",ch3,ch3);
   return 0;
}*/

/*//4. Write a program to print last digit of a given number
int main()
{
   int num;
   printf("Enter a number ");
   scanf("%d",&num);
   printf("Last digit of %d is %d",num,num%10);
   return 0;
}*/

//5. Write a program to print a given number without its last digit
int main()
{
   int num;
   printf("Enter a number ");
   scanf("%d",&num);
   printf("After removing last digit, number is %d",num/10);
   return 0;
}