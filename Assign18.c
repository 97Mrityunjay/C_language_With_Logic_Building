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
            if(j>=5-i&&j<=3+i&&(i+j)%2!=0)
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
               if(j>=i&&j<=8-i)
               {
                 printf("%c",k);
                 j<4?k++:k--;
               }
               else
               {
                printf(" ");
               }
        }
        printf("\n");
    }
}*/
//Q7.
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                if((i+j)%2==0)
                {
                    printf("%d",k);
                    j<5?k++:k--;
                }
                else
                {
                    if(j==5)
                     k--;
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
}
//Q8
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
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
            if(j<=5-i||j>=3+i)
            {
               printf("%d",k); 
               j<4?k++:k--;
            }
            else
            {
                if(j==4)
                  k--;
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//Q10.
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=65;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                if(j==4)
                 k--;
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/