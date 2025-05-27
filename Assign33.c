#include<stdio.h>
void sumOfTwoMatrices(int[][3],int[][3],int[][3],int);
void sumOfTwoMatrices(int arr1[][3],int arr2[][3],int arr3[][3],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}
int main()
{
    int arr1[3][3],arr2[3][3], arr3[3][3],r,c;
    printf("Enter elements of first matrix\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr1[r][c]);
        }
    }
    printf("Enter second matrix\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            scanf("%d",&arr2[r][c]);
        }
    }
    sumOfTwoMatrices(arr1,arr2,arr3,3);
    printf("Sum of two matrices\n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",arr3[r][c]);
        }
        printf("\n");
    }
    return 0;
}