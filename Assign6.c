#include<stdio.h>
//1. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD
/*int main()
{
    float INR, USD;
    printf("Enter the amount in INR ");
    scanf("%f",&INR);
    USD = INR/84.23;
    printf("%f INR = %f USD",INR,USD);
    return 0;
}*/

//2. Write a program to take a three digit number from the user and rotate its digits by one position toward the right
/*int main()
{
    int num,r;
    printf("Enter a number ");
    scanf("%d",&num);
    r = num%10;
    num = num/10;
    num = r*100+num;
    printf("After rotating its digits by one position toward right, the number is %d",num);
    return 0;
}*/

//3.Execute the statement: 10>8>4
/*int main()
{
    int x = 10>8>4; //0
    printf("%d",x);
    return 0;
}*/

//4. Execute the statement: x = 12>-2
/*int main()
{
    int x = 12>-2;//1
    printf("%d",x);
    return 0;
}*/

//5. Execute the statements: x = 3<0 && 5>0
int main()
{
    int x = 3<0 && 5>0;//0
    printf("%d",x);
    return 0;
}