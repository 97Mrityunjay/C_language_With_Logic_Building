#include<stdio.h>
int countVowels(char[]);
int findFirstOccurrenceOfCharacter(char[],char);
int findCharacterBetweenIndices(char[],char,int,int);
void swapTwoCharactersWithSpecifiedIndex(char[],int,int);
int isAlphanumericString(char[]);
/*Q1.Write a function to count vowels in a string*/
int countVowels(char s[])
{
    int i,j,count=0;
    char v[11]="aeiouAEIOU";
    for(i=0;s[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(s[i]==v[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

/*Q2.Write a function to find a character in a given string.Return index of first occurrence of a given character.Return -1 if character not found.*/
int findFirstOccurrenceOfCharacter(char s[],char ch)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]==ch)
        {
            return i;
        }
    }
    return -1;
}

/*Q3.Write a function to find character in a given string between specified indices(start index(inclusive) and end index(exclusive))*/
int findCharacterBetweenIndices(char str[],char ch,int startIndex,int endIndex)
{
    int i;
    for(i=startIndex;str[i]&&i<endIndex;i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;
}

/*Q4.Write a function to swap two characters of a given string with specified indices*/
void swapTwoCharactersWithSpecifiedIndex(char str[],int id1,int id2)
{
    int l;
    char ch;
    for(l=0;str[l];l++);
    if(id1>=0 && id1<l && id2>=0 && id2<l)
    {
        ch=str[id1];
        str[id1]=str[id2];
        str[id2]=ch;
        printf("After swapping character at index %d and %d,string is \"%s\"",id1,id2,str);
    }
    else
    {
        printf("Swapping is not possible as you have entered invalid indices");
    }
}

/*Q5.Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at least one alphabet and one digit)*/

int isAlphanumericString(char str[])
{
    int i,alphabet=0,digit=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>='A' && str[i]<='Z'))
        {
            alphabet=1;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            alphabet=1;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digit = 1;
        }
    }
    if(alphabet&&digit)
     return 1;
    else
     return 0;
}
int main()
{
    char s[30];
    int i,res;
    printf("Enter a string\n");
    fgets(s,30,stdin);
    for(i=0;s[i];i++);
    s[i-1]='\0';
    res=isAlphanumericString(s);
    if(res==1)
     printf("\"%s\" is an alphanumeric string",s);
    else
     printf("\"%s\" is not an alphanumeric string",s);
    return 0;
}