#include<stdio.h>
//Program to draw Patterns
//Q1.
/*int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
    for(j=1;j<=5;j++)
    {
        if(j<=i)
          printf("*");
        else
         printf(" ");
    }
    printf("\n");
   }
   return 0;
}*/

//Q2.
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

//Q3.
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//Q4
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//Q5.
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
             printf("%d ",j);
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//Q6.
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        int num=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%d ",num--);
            }
            else
            {
             printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//Q7.
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        char ch='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
               printf("%c",ch++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//Q8.
/*int main()
{
    int i,j,num=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
                printf("%d ",num++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//Q9.
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int ch = 64+i;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
               printf("%c",ch++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

//Q10.
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/