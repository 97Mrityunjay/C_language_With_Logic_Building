#include<stdio.h>
int Sum_Of_Numbers();
/*Q1.Write a program to calculate the sum of numbers stored in an array of size 10.Take array values from the user*/
int Sum_Of_Numbers()
{
    int arr[10],sum=0,i;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
   return sum;
}

/*Q2.Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user*/
float Average_Of_Numbers()
{
    int arr[10],i=0,sum=0;
    float avg;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    avg=sum*1.0/10;
    return avg;
}

/*Q3.Write a program to calculate the sum of all even numbers and sum of all odd numbers,Which are stored in an array of size 10.Take array values from the user*/
void f1()
{
    int arr[10],sumEven=0,sumOdd=0,i;
    printf("Enter 10 numbers ");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
         sumEven+=arr[i];
        else
         sumOdd+=arr[i];
    }
    printf("Sum of all even numbers=%d\n",sumEven);
    printf("Sum of all odd numbers=%d",sumOdd); 
}

/*Q4.Write a program to find the greatest number stored in an array of size 10.Take array values from the user*/
int Find_Greatest_Number()
{
    int arr[10],i,max;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
         max=arr[i];
    }
    return max; 
}

/*Q5. Write a program to find the smallest number stored in an array of size 10.Take array values from the user.*/
int Find_Smallest_Number()
{
    int arr[10],i,min;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
         min=arr[i];
    }
    return min;
}
int main()
{
   /*float avg;
   printf("Average=%f",Average_Of_Numbers());
   */
   int max;
   max=Find_Greatest_Number();
   printf("Greatest number=%d",max);
   return 0;
}