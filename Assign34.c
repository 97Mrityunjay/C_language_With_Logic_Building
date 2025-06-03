#include<stdio.h>
#include<string.h>
int stringLength(char[],int);
int f2(char[],char);
int f3(char[]);
int countSpaces(char[],int);
void f5(char[]);
void f6(char*);
//Q1. Write a program to calculate the length of the string(Without using builtin method)
int stringLength(char s[],int size)
{
    int l;
    for(l=0;s[l];l++);
    if(l==size-1)
     return l;
    s[l-1]='\0';
    return l-1;
}
/*Q2.Write a program to count the occurrence of a given character in a given string*/
int f2(char str[],char ch)
{
    int count=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
         count++;
    }
    return count;
}
/*Q3.Write a program to count vowels in a given string*/
int f3(char str[])
{
    int countVowels=0,j;
    for(j=0;str[j];j++)
    {
        if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
          countVowels++;
    }
    return countVowels;
}
/*Q4.Write a program to count spaces in a given string*/
int countSpaces(char s[],int size)
{
    int count=0,j;
    for(j=0;s[j];j++);
    s[j-1]='\0';
    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]==' ')
         count++;
    }
    return count;
}
/*Q5.Write a program to convert a given string into uppercase*/
void f5(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
}
void f6(char *s)
{
    // char str[]="Ram";
    s="Ajay";
    printf("%s",s);
    printf("\n%c","Ajay"[2]);
   
}
int main()
{
    // char str[10],l;
    // printf("Enter a string\n");
    // fgets(str,10,stdin);
    // l=stringLength(str,10);
    // printf("Length of string=%d",l);

    // char s[20];
    // int res;
    // printf("Enter string\n");
    // fgets(s,20,stdin);
    // res=f3(s);
    // printf("Number of vowels in %s is %d",s,res);

    // char str[20];
    // int res;
    // printf("Enter a string\n");
    // fgets(str,20,stdin);
    // res=countSpaces(str,20);
    // printf("Number of spaces is %d",res);

    char str[30];
    printf("Enter a string\n");
    fgets(str,30,stdin);
    f5(str);
    printf("%s",str);
    return 0;
}