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
void f2()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter 9 elements of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter 9 elements of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    printf("After multiplication of two matrices, the resultant matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
void f3()
{
    int A[2][3],B[3][2],i,j;
    printf("Enter 6 elements of a matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    printf("Transposed matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
         printf("%d ",B[i][j]);
        printf("\n");
    }

}
int main()
{
    // int arr1[3][3],arr2[3][3], arr3[3][3],r,c;
    // printf("Enter elements of first matrix\n");
    // for(r=0;r<3;r++)
    // {
    //     for(c=0;c<3;c++)
    //     {
    //         scanf("%d",&arr1[r][c]);
    //     }
    // }
    // printf("Enter second matrix\n");
    // for(r=0;r<3;r++)
    // {
    //     for(c=0;c<3;c++)
    //     {
    //         scanf("%d",&arr2[r][c]);
    //     }
    // }
    // sumOfTwoMatrices(arr1,arr2,arr3,3);
    // printf("Sum of two matrices\n");
    // for(r=0;r<3;r++)
    // {
    //     for(c=0;c<3;c++)
    //     {
    //         printf("%d ",arr3[r][c]);
    //     }
    //     printf("\n");
    // }
    f3();
    return 0;
}