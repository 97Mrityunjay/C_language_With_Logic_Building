#include<stdio.h>
//1. Write a program to check whether a given number is positive, negative or zero 
int main()
{
   int num;
   printf("Enter a number ");
   scanf("%d",&num);
   if(num>0)
     printf("Positive number"); 
   else if(num<0)
     printf("Negative number");
   else
     printf("Zero");
  return 0;
}

//2. Write a program to check whether a given character is an alphabet(Uppercase),an alphabet(lowercase),a digit or a special character
/*int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
       printf("Uppercase Alphabet");
    else if(ch>='a'&&ch<='z')
       printf("Lowercase Alphabet");
    else if(ch>='0'&&ch<='9')
       printf("Digit");
    else
      printf("Special character");
   return 0;
}*/

//3. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not
/*int main()
{
    int a,b,c;
    printf("Enter the length of the sides of a triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
}*/

//4. Write a program which takes the month number as an input and display number of days in that month
/*int main()
{
    int month;
    printf("Enter the month number ");
    scanf("%d",&month);
    if(month==2)
      printf("28 or 29 days");
    else if(month==4||month==6||month==9||month==11)
      printf("30 days");
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
      printf("31 days");
    else
      printf("You have entered invalid month number");
   return 0;
}*/