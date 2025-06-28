#include<stdio.h>
int lengthOfString(char[]);
char* reverseString(char[]);
int compareTwoStrings(char[],char[]);
char* convertIntoUpperCase(char[]);
char* convertIntoLowerCase(char[]);
/*Q1. Write a function to calculate length of the string*/
int lengthOfString(char s[])
{
    int l;
    for(l=0;s[l]!='\0';l++);
    return l;
}
/*Q2.Write a function to reverse a string*/
char* reverseString(char s[])
{
    char temp;
    int l = lengthOfString(s);
    int i;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    }
    return s;
}

/*Q3.Write a function to compare two strings*/
int compareTwoStrings(char s1[],char s2[])
{
    int i;
    for(i=0;s1[i]&&s2[i];i++)
    {
        if(s1[i]!=s2[i])
        {
            return s1[i]-s2[i];
        }
    }
    return s1[i]-s2[i];
}

/*Q4.Write a function to transform string into uppercase*/
char* convertIntoUpperCase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    return s;
}

/*Q5.Write a function to transform a string into lowercase*/
char* convertIntoLowerCase(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    return s;
}
int main()
{
    // char s[30],*res;
    // int i;
    // printf("Enter string\n");
    // fgets(s,30,stdin);
    // for(i=0;s[i];i++);
    // s[i-1]='\0';
    // res=convertIntoUpperCase(s);
    // printf("After converting string into uppercase,string is\n");
    // printf("%s\n",res);

    char str1[30],str2[40];
    int i,res;
    printf("Enter first string\n");
    fgets(str1,30,stdin);
    printf("Enter second string\n");
    fgets(str2,40,stdin);
    for(i=0;str1[i];i++);
    str1[i-1]='\0';
    for(i=0;str2[i];i++);
    str2[i-1]='\0';
    res=compareTwoStrings(str1,str2);
    if(res<0)
     printf("\"%s\" is smaller than \"%s\"",str1,str2);
    else if(res>0)
     printf("\"%s\" is greater than \"%s\"",str1,str2);
    else
     printf("\"%s\" and \"%s\" are same\n",str1,str2);
    return 0;
}