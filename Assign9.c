#include<stdio.h>
//1. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage
/*int main()
{
    float cp,sp,profitPercentage,lossPercentage;
    printf("Enter cost price of a product ");
    scanf("%f",&cp);
    printf("Enter selling price of a product ");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profitPercentage = (sp-cp)/cp*100;
        printf("Profit percentage = %0.3f",profitPercentage);
    }
    else if(cp>sp){
        lossPercentage = (cp-sp)/cp*100;
        printf("Loss percentage = %0.3f",lossPercentage);
    }
    else
    {
        printf("Profit or loss percentage cannot be calculated");
    }
    return 0;
}*/
//2. Write a program to take marks of 5 sujects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed
/*int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five subjects ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
    {
        printf("Candidate passed the examination");
    }
    else{
        printf("Candidate failed the examination");
    }
    return 0;
}*/

//3. Write a program to check whether a given alphabet is in uppercase or lowercase
/*int main()
{
    char ch;
    printf("Enter an alphabet ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase Alphabet");
    else if(ch>='a' && ch<='z')
        printf("Lowercase Alphabet");
    else
        printf("Other character");
    return 0;
}*/

//4. Write a program to check whether a given number is divisible by 3 and divisible by 2
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num%3==0&&num%2==0)
    {
        printf("%d is divisible by both 3 and 2",num);
    }
    else{
        printf("%d is not divisible by both 3 and 2",num);
    }
}*/

//5. Write a program to check whether a given number is divisible by 7 or divisible by 3
/*int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(num%7==0||num%3==0)
    {
        printf("%d is divisible by 7 or 3",num);
    }
    else{
        printf("%d is not divisible by 7 or 3",num);
    }
    return 0;
}*/