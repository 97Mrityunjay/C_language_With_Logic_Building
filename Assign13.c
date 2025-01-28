#include<stdio.h>
//1. Write a program to calculate sum of first N natural numbers
/*int main()
{
    int n,i,sum;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
       sum+=i;
    }
    printf("Sum of first %d natural numbers=%d",n,sum);
    return 0;
}*/

//2. Write a program to calculate sum of first N even natural numbers
/*int main()
{
    int n,i,sum;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum+=2*i;
    }
    printf("Sum of first %d even natural numbers=%d",n,sum);
    return 0;
}*/

//3. Write a program to calculate sum of first N odd natural numbers
/*int main()
{
    int n,i,sum;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum+=2*i-1;
    }
    printf("Sum of first %d odd natural numbers=%d",n,sum);
    return 0;
}*/

//4. Write a program to calculate sum of squares of first N natural numbers
/*int main()
{
    int n,i=1,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i*i;
        i++;
    }
    printf("Sum of squares of first %d natural numbers=%d",n,sum);
    return 0;
}*/

//5. Write a program to calculate sum of cubes of the first N natural numbers
int main()
{
    int n,i,sum;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
    {
        sum+=i*i*i;
    }
    printf("Sum of cubes of first %d natural numbers=%d",n,sum);
    return 0;
}