#include<stdio.h>
int Find_Greatest_Number(int[],int);
int Find_Smallest_Number(int[],int);
void sortArray(int[],int);
void rotateArray(int[],int,int,char);
int f2(int[],int);
/*Q1.Write a function to find the greatest number from the given array of any size(TSRS)*/
int Find_Greatest_Number(int a[],int size)
{
    int max=a[0];
    int i;
    for(i=1;i<size;i++)
    {
        if(max<a[i])
          max=a[i];
    }
    return max;
}

/*Q2.Write a function to find the smallest number from the given array of any size(TSRS)*/
int Find_Smallest_Number(int a[],int size)
{
    int min=a[0],i;
    for(i=1;i<size;i++)
    {
        if(min>a[i])
         min=a[i];
    }
    return min;
}

/*Q3.Write a function to sort an array of any size(TSRN)*/
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
    // printf("After sorting Array elements are\n");
    // for(j=0;j<size;j++)
    // {
    //     printf("%d ",a[j]);
    // }
}
void selectionSort(int a[],int size)
{
    int r,i,min,temp;
    for(r=0;r<size-1;r++)
    {
        min=r;
        for(i=r+1;i<size;i++)
        {
            if(a[min]>a[i])
             min=i;
        }
        temp=a[r];
        a[r]=a[min];
        a[min]=temp;
    }   
}
/*Q4.*/
void rotateArray(int a[],int size,int n,char d)
{
    int temp1,temp,i,j;
    if(d=='l')
    {
        for(i=1;i<=n;i++)
        {
            temp=a[0];
            for(j=0;j<size-1;j++)
            {
                a[j]=a[j+1];
            }
            a[size-1]=temp;
        }
    }
    else if(d=='r')
    {
        for(i=1;i<=n;i++)
        {
            temp=a[size-1];
            for(j=size-1;j>0;j--)
            {
                a[j]=a[j-1];
            }
            a[0]=temp;
        }
    }
    printf("After rotate array elements\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}

/*Q5. Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element */
int f2(int arr[],int size)
{
    int i;
    for(i=0;i<size-1;i++)
    {
        if(arr[i]==arr[i+1])
          return arr[i];
    }
    return -1;
}
int main()
{
    // int n,i;
    // printf("Enter a number ");
    // scanf("%d",&n);
    // int arr[n];
    // printf("Enter %d numbers ",n);
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // sortArray(arr,n);
    
    // int size=10,arr[size],i,n;
    // char d='r';
    // printf("Enter %d numbers ",size);
    // for(i=0;i<size;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("Enter position ");
    // scanf("%d",&n);
    // rotateArray(arr,size,n,d);
    int a[10],i;
    printf("Enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionSort(a,10);
    printf("After sorting in ascending order, elements are:\n");
    for(i=0;i<10;i++)
     printf("%d ",a[i]); 
    
    return 0;   
}