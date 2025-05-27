#include<stdio.h>
int f1(int[],int,int,int);
void mergeArray(int[],int[],int[],int);
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
            k=i;
            j++;
        }
    } 
    return size-j;
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
void mergeArray(int arr1[],int arr2[],int arr3[],int size)
{
    int k,i=0,j=0;
    Sort_Elements_In_Descending_Order(arr1,size);
    Sort_Elements_In_Descending_Order(arr2,size);
    for(k=0; i<size && j<size;k++)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
/*Q5.Write a function to count frequency of each elements of an array*/
// void countFrequency(int arr[],int size)
// {
//     int k,j,count=0;
//     sortArray(arr,size);
//     for(k=0;k<size-1;k=k+count)
//     {
//         count=0;
//         if(arr[k]!=arr[k+1])
//         {
//             count=1;
//             printf("%d->%d\n",arr[k],count);
//         }
//         else
//         {
//             j=k+1;
//             while(j<size && arr[k]==arr[j])
//             {
//                 count++;
//                 j++;
//             }
//             count++;
//             printf("%d->%d\n",arr[k],count);
//         }
//     }
//     if(k==size-1)
//     {
//        
//         printf("%d->%d\n",arr[k],count);
//     }
   
// }
void countFrequency(int arr[],int size)
{
    int k,i,count=0;
    sortArray(arr,size);
    for(i=0,k=0;i<size;i++)
    {
        if(arr[i]==arr[k])
          count++;
        else
        {
            printf("%d->%d\n",arr[k],count);
            k=i;
            count=1;
        }
    }
    printf("%d->%d",arr[k],count);
}

int main()
{
    // int arr[10],i,res;
    // printf("Enter 10 numbers\n");
    // for(i=0;i<10;i++)
    //   scanf("%d",&arr[i]);
    // res=countTotalNumberOfDuplicateElements(arr,10);
    // printf("Total number of duplicate elements\n");
    // printf("%d",res);
    // int arr1[10]={5,6,7,8,9,10,12,15,18,20};
    // int arr2[10]={19,25,28,29,30,32,35,40,45,50};
    // int arr3[20],i;
    // mergeArray(arr1,arr2,arr3,10);
    // for(i=0;i<20;i++)
    //   printf("%d ",arr3[i]);
    int arr[]={2,2,3,4,5,6,7,8};
    countFrequency(arr,8);
    return 0;
}