#include "Assign31.c"
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
int main()
{
    int arr[]={3,5,5,3,2,5,2,9,8,2,5,9};
    printAllUniqueElements(arr,12);
    return 0;
}