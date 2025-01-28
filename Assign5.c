#include<stdio.h>
//1. Write a program to input three digit number and display the sum of digits
/*int main()
{
   int num;
   printf("Enter three digit number ");
   scanf("%d",&num);
   printf("Sum of the digits = %d",num/100+num/10%10+num%10);
   return 0;
}*/

//2. Write a program to find ASCII code of the character '+'
/*int main()
{
    printf("ASCII code of the character '%c' is %d",'+','+');
    return 0;
}*/

//3. Write a program to print size of an int, a float, a char, and a double type variable
/*int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("%d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}*/

//4. Write a program to make the last digit of a number stored in a variable as zero
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("%d",num/10*10);
    return 0;
}

//5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number
/*int main()
{
    int num, digit;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("Enter a digit ");
    scanf("%d",&digit);
    printf("Resulting number = %d",num*10+digit);
    return 0;
}*/