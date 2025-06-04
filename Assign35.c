#include<stdio.h>
#include<string.h>
/*Q1. Write a program to convert a given string into lowercase*/
void convertLowerCase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
}
/*Q2.Write a program to reverse a string*/
void reverseString(char s[])
{
    int l,i,temp;
    for(l=0;s[l];l++);
    s[l-1]='\0';
    l--;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
}
int main()
{
    // char str[30];
    // printf("Enter a string\n");
    // fgets(str,30,stdin);
    // convertLowerCase(str);
    // printf("%s",str);

    char str[30];
    printf("Enter a string\n");
    // fflush(stdin);
    fgets(str,30,stdin);
    reverseString(str);
    printf("%s",str);
    return 0;
}