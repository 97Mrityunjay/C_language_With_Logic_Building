#include<stdio.h>
void Sort_Elements_In_Ascending_Order();
void Find_Second_Largest_Number();
void Find_Second_Smallest_Number();
void Sort_Elements_In_Descending_Order();
void copyElements();
/*Q1.Write a program to sort elements of an array of size 10.Take array values from the user.*/
void Sort_Elements_In_Ascending_Order()
{
    int arr[10],i,j,temp;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
      scanf("%d",&arr[i]);
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
           if(arr[j]<arr[i])
           {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp;
           }
        } 
    }
    printf("After sorting in ascending order,elements are\n");
    for(i=0;i<10;i++)
    {
       printf("%d ",arr[i]);
    } 
}

/*Q2.Write a program to find the second largest in an array.Take array values from the user*/
void Find_Second_Largest_Number()
{
    int arr[10],i,secondMax,max;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    secondMax=arr[0];
    for(i=1;i<10;i++)
    {
       if(max<arr[i])
        max=arr[i];
       if(secondMax>arr[i])
        secondMax=arr[i];
    }
    for(i=0;i<10;i++)
    {
       if(arr[i]!=max)
       {
          if(secondMax<arr[i])
          {
             secondMax=arr[i];
          }
       }   
    }
    printf("Second Largest number=%d",secondMax);
}
/*Q3.Write a program to find the second smallest number in an array.Take array values from users*/
void Find_Second_Smallest_Number()
{
  int arr[10],i,min,secondMin;
  printf("Enter 10 numbers ");
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  min=arr[0];
  secondMin=arr[0];
  for(i=1;i<10;i++)
  {
    if(arr[i]<min)
     min=arr[i];
    if(arr[i]>secondMin)
     secondMin=arr[i];
  }
  for(i=0;i<10;i++)
  {
    if(arr[i]!=min)
    {
       if(secondMin>arr[i])
       {
          secondMin=arr[i];
       }
    }
  }
  printf("Second Smallest number=%d",secondMin);
}
/*Q4.Write a program to sort an array of 10 elements in descending order*/
void Sort_Elements_In_Descending_Order()
{
   int arr[10],i,j,temp;
   printf("Enter 10 numbers ");
   for(i=0;i<10;i++)
   {
     scanf("%d",&arr[i]);
   }
   for(i=0;i<9;i++)
   {
      for(j=i+1;j<10;j++)
      {
         if(arr[i]<arr[j])
         {
           temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
         }
      }
   }
   printf("After sorting in descending order,elements are\n");
   for(i=0;i<10;i++)
   {
     printf("%d ",arr[i]);
   }
}
/*Q5.Write a program in c to copy the elements of one array into another array.Take array values from the user*/
void copyElements()
{
   int arr1[10],arr2[10],i;
   printf("Enter 10 numbers ");
   for(i=0;i<10;i++)
   {
      scanf("%d",&arr1[i]);
   }
   for(i=0;i<10;i++)
   {
     arr2[i]=arr1[i];
   }
   for(i=0;i<10;i++)
   {
     printf("%d ",arr2[i]);
   }
}
int main()
{
   Find_Second_Smallest_Number();
   return 0;
}