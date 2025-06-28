#include<stdio.h>
#include<string.h>
void convertLowerCase();
void reverseString();
void f3();
void copyString();
void firstOccurrenceOfCharacter();
/*Q1. Write a program to convert a given string into lowercase*/
void convertLowerCase()
{
    int i;
    char s[30];
    printf("Enter a string\n");
    fgets(s,30,stdin);
    for(i=0;s[i]!='\0';i++);
    s[i-1]='\0';
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("After converting string into lowercase, string is\n");
    printf("%s",s);
}
/*Q2.Write a program to reverse a string*/
void reverseString()
{
    char s[30],temp;
    int l,i;
    for(l=0;s[l];l++);
    s[l-1]='\0';
    l--;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    printf("Reversed String=%s",s);
}
/*Q3.Write a program in C to count the total number of alphabets,digits and special characters in a string*/
void f3()
{
    int i,countAlphabets=0,countDigits=0,countSpecialChar=0;
    char s[30];
    printf("Enter String\n");
    fgets(s,30,stdin);
    for(i=0;s[i];i++);
    s[i-1]='\0';
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
        {
            countAlphabets++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            countDigits++;
        }
        else
        {
            countSpecialChar++;
        }
    }
    printf("Number of Alphabets in string=%d\n",countAlphabets);
    printf("Number of Digits in string=%d\n",countDigits);
    printf("Number of Special Character in string=%d\n",countSpecialChar);
}
/*Q4.Write a program in c to copy one string to another char array*/
void copyString()
{
    char str[50];
    char s[50];
    int i;
    printf("Enter string\n");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        s[i]=str[i];
    }
   s[i]='\0';
   for(i=0;s[i];i++)
   {
      printf("%c",s[i]);
   }
}
/*Q5.Write a program to find first occurrence of a given character in given string*/
void firstOccurrenceOfCharacter()
{
    int i;
    char s[30],ch;
    printf("Enter string\n");
    fgets(s,30,stdin);
    printf("Enter a character\n");
    scanf("%c",&ch);
    for(i=0;s[i];i++);
    s[i-1]='\0';
    for(i=0;s[i];i++)
    {
        if(s[i]==ch)
         break;
    }
    if(s[i]!='\0')
     printf("\'%c\' is found first time in given string at index %d",ch,i);
    else
    printf("\'%c\' is not found in given string",ch);
}
int main()
{
    f3();
    return 0;
 }