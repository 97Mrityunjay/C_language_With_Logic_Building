#include<stdio.h>
/*Q1.Write a function to check whether a given string is palindrome or not*/
int isPalindrome(char str[])
{
    int l,i;
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
         return 0;
    }
    return 1;
}

/*Q3.Write a function to count words in a given string*/
int countWords(char str[])
{
    int i,count=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]==' '||str[i]==',')
         count++;
         
    }
    count++;
    return count;
}
int main()
{
    char s[80];
    int i,res;
    printf("Enter a string\n");
    fgets(s,80,stdin);
    for(i=0;s[i];i++);
    s[i-1]='\0';
    res=countWords(s);
    printf("Number of words in string \"%s\" = %d",s,res);
    return 0;
}