#include<stdio.h>
//Q1. 
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
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
    return 0;
}*/

//Q2.
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
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
    return 0;
}*/

//Q3.
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=5-i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(i%2!=j%2)
                {
                   printf("*");
                }
                else
                {
                  printf(" ");
                }
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
//Q4. 
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
           if(j>=5-i)
           {
              if(j<4)
               printf("%d",k++);
              else if(j<=3+i)
               printf("%d",k--);
              else
               printf(" ");      
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

//Q5.
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=65;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
               printf("%c",k++);   
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

//Q6
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=65;
        for(j=1;j<=7;j++)
        {
            if(j>=i)
            {
               if(j<4)
               {
                 printf("%c",k++);
               }
               else if(j<=8-i)
               {
                 printf("%c",k--);
               }
               else
               {
                printf(" ");
               }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/

//Q8
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1)
              printf("*");
            else if(j<=5-i)
              printf("*");
            else if(j>=i+3)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

//Q9.
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(i==1)
            {
                if(j<5-i)
                  printf("%d",k++);
                else if(j>=3+i)
                  printf("%d",k--);
            }
            else if(j<=5-i)
            {
               printf("%d",k++); 
            }
            else if(j>=3+i)
            {
                printf("%d",--k);
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

//Q10.
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=65;
        for(j=1;j<=7;j++)
        {
            if(i==1)
            {
                if(j<5-i)
                 printf("%c",k++);
                else if(j>=3+i)
                 printf("%c",k--);
            }
            else if(j<=5-i)
            {
                printf("%c",k++);
            }
            else if(j>=3+i)
            {
                printf("%c",--k);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}