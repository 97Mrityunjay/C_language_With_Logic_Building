#include<stdio.h>
//1. Write a program to print MySirG N times on the screen
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG ");
        i++;
    }
    return 0;
}*/

//2. Write a program to print the first N natural numbers
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d natural number\n",n);
    while(i<=n)
    {
       printf("%d ",i);
       i++;
    }
    return 0;
}*/

//3. Write a program to print the first N natural numbers in reverse order
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d natural numbers in reverse order\n",n);
    while(i<=n)
    {
        printf("%d ",n+1-i);
        i++;
    }
    return 0;
}*/

//4. Write a program to print the first N odd natural numbers
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d odd natural number\n",n);
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
    return 0;
}*/

//5.  Write a program to print the first N odd natural numbers in reverse order
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d odd natural numbers in reverse order\n",n);
    while(i<=n)
    {
        printf("%d ",n*2+1-2*i);
        i++;
    }
    return 0;
}*/

//6. Write a program to print the first N even natural numbers
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d even natural numbers\n",n);
    while(i<=n)
    {
        printf("%d ",2*i);
        i++;
    }
    return 0;
}*/

//7. Write a program to print first N even natural numbers in reverse order
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("First %d even natural numbers in reverse order\n",n);
    while(i<=n)
    {
        printf("%d ",n*2+2-2*i);
        i++;
    }
    return 0;
}*/

//8. Write a program to print squares of the first N natural numbers
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Squares of the first %d natural numbers\n",n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}*/


//9. Write a program to print cubes of the first N natural numbers
/*int main()
{
    int n,i=1;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Cubes of the first %d natural numbers\n",n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
    return 0;
}*/

//10. Write a program to print a table of N
int main()
{
    int num,i=1;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("Table of %d\n",num);
    while(i<=10)
    {
        printf("%dx%d=%d\n",num,i,num*i);
        i++;
    }
    return 0;
}