#include<stdio.h>
//1. Write a program to calculate size of a character constant
/*int main()
{
    printf("Size of a character constant is %d bytes",sizeof('@'));
    return 0;
}*/

/*//2. Write a program to calculate size of a real constant
int main()
{
    printf("Size of a real constant is %d bytes",sizeof(2.5));
    return 0;
}*/

/*//3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment opetator.
int main()
{
    char ch='A';
    ch++;
    printf("%c",ch);
    return 0;
}*/


/*//4. Write a program to swap the values of two int variables
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b ");
    scanf("%d %d",&a,&b);
    printf("Before swapping the value of a and b:\n");
    printf("a=%d b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping the values of a and b:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}*/

/*//5. Write a program to swap values of two int variables without using a third variable
int main()
{
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values of a and b:\n");
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping the values of a and b:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}*/

/*//6. Write a program to swap values of two int variables without using third variable and without using +,- operator
int main()
{
    int a,b;
    printf("Enter thw values of a and b ");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values of and b are:\n");
    printf("a=%d b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter Swapping the values of a and b:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}*/

/*//7. Write a program to swap values of two int variables without using third variable and arithmetic operators
int main()
{
    int a,b;
    printf("Enter the values of a and b ");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values of a and b\n");
    printf("a=%d b=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping the values of and b:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}*/

//6. Write a program to swap values of two int variables in single line arithmetic expression
/*int main()
{
    int a,b;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    printf("Before swapping the values of a and b:\n");
    printf("a=%d b=%d",a,b);
    a=a+b-(b=a);
    printf("\nAfter swapping the values of a and b are:\n");
    printf("a=%d b=%d",a,b);
    return 0;
}*/