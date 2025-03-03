#include<Assign30.c>
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
int countTotalNumberOfDuplicateElements(int arr[],int size)
{
    int flag=0,count=0,n;
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
            }
           
        }
        if(flag==1)
        {
            count++;
            n=arr[i];
        }
    }
}