#include<stdio.h>
int f1(int[],int,int,int);
/*Q1.Write a function to swap two elements of given array with specified indices*/
int f1(int arr[],int size,int index1,int index2)
{
    int temp;
    if(index1<size&&index2<size)
    {
        temp=arr[index1];
        arr[index1]=arr[index2];
        arr[index2]=temp;
    }
}
void sortArray(int a[],int size)
{
    int r,j,temp;
    for(r=1;r<size;r++)
    {
        // for(j=i+1;j<size;j++)
        // {
        //     if(a[j]<a[i])
        //     {
        //         temp=a[j];
        //         a[j]=a[i];
        //         a[i]=temp;
        //     }
        // }
        for(j=0;j<size-r;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
/*Q2.Write a function to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)*/
int countTotalNumberOfDuplicateElements(int a[],int size)
{
    int b[size],i=0,j=0,k=0;
    sortArray(a,size);
    b[j]=a[i];
    for(i=1,j=1;i<size;i++)
    {
        if(a[i]>a[k])
        {
            b[j]=a[i];
            j++;
            k=i;
        }
    }
    printf("Total number of duplicate elements=%d",size-j);
}
/*Q3.Write a function to print all unique elements in Array*/
void printAllUniqueElements(int a[],int size)
{
    int b[size],i=0,j=0,k=0;
    sortArray(a,size);
    b[j]=a[i];
    printf("%d ",b[j]);
    for(i=1,j=1;i<size;i++)
    {
        if(a[i]>a[k])
        {
            b[j]=a[i];
            printf("%d ",b[j]);
            j++;
            k=i;
        }
    }

}
/*Q4. Write a function to merge two arrays of the same size sorted in descending order*/
void Sort_Elements_In_Descending_Order(int a[],int size)
{
   int r,j,temp;
   for(r=1;r<size;r++)
   {
      for(j=0;j<size-r;j++)
      {
         if(a[j]<a[j+1])
         {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
         }
      }
   }
}
int main()
{
    int arr1[]={8,15,12,18,17,20,10};
    int arr2[]={5,6,7,9,2,4,3};
    mergeTwoArrays(arr1,arr2,7);
    return 0;
}