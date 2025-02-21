#include<stdio.h>
int Find_Greatest_Number(int[],int);
int Find_Smallest_Number(int[],int);
void sortArray(int[],int);
void rotateArray(int[],int,int,char);
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
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("After sorting Array elements are\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}

/*Q4.*/
void rotateArray(int a[],int size,int n,char d)
{
    int temp1,temp,i,j;
    if(d=='l')
    {
        temp=a[size-1];
        for(i=1;i<=n;i++)
        {
            for(j=size-2;j>=0;j--)
            {
                temp1=a[j];
                a[j]=temp;
                temp=temp1;
            }
            a[size-1]=temp;
        }
    }
    else if(d=='r')
    {
        temp=a[0];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<size;j++)
            {
                temp1=a[j];
                a[j]=temp;
                temp=temp1;
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

int main()
{
    /*int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Sort(arr,n);
    */
    int size=10,arr[size],i,n;
    char d='l';
    printf("Enter %d numbers ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position ");
    scanf("%d",&n);
    rotateArray(arr,size,n,d);
    return 0;
}