#include<stdio.h>
#include<stdlib.h>
//Q1. Write a program which takes the month number as an input and display number of the days in month
/*int main()
{
    int month;
    printf("Enter month number ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:    
    case 8:  
    case 10:    
    case 12:
         printf("31 days");
         break;
    case 4:
    case 6:
    case 9:
    case 11:
         printf("30 days");
         break;
    case 2:
         printf("28 or 29 days");
         break;
    default:
        printf("Invalid month number");
        break;
    }
    return 0;
}*/

//Q2. Write a menu driven program with following options:1.Addition 2.Subtraction 3. Multiplication 4.Division 5.Exit
int main()
{
    int option;
    int a,b;
    float div;
    while(1)
    {
        printf("\n1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("\n\nEnter your choice ");
        scanf("%d",&option);
        if(option>4);
        else
        {
          printf("Enter two numbers ");
          scanf("%d%d",&a,&b);
        }
        switch(option)
        {
            case 1:   
                printf("Addition of %d and %d is %d",a,b,a+b);
                break;
            case 2:
                printf("Difference between %d and %d is %d",a,b,a-b);
                break;
            case 3:
                printf("Multiplication of %d and %d is %d",a,b,a*b);
                break;
            case 4:
                 div=a*1.0/b;
                 printf("Division of %d and %d is %f",a,b,div);
                 break;
            case 5:
                 exit(0);
            default:
                 printf("Invalid option!Retry");
        }
    }
    return 0;
}

//Q3. Write a program which takes the day number of a week and displays a unique greeting message for the day
/*int main()
{
    int day;
    printf("Enter day number of a week ");
    scanf("%d",&day);
    switch(day)
    {
        case 1: 
              printf("Happy Monday!Have a nice day");
              break;
        case 2:
             printf("Happy Tuesday!Enjoy your day");
             break;
        case 3:
             printf("Happy Wednesday!Have a wonderful day");
             break;
        case 4:
             printf("Happy Thursday!Have a great day");
             break;
        case 5:
             printf("Happy Friday!Make it a fantastic day");
             break;
        case 6:
             printf("Happy Saturday!Wishing you a day filled with joy");
             break;
        case 7:
             printf("Happy Sunday!Shine bright today");
             break;
        default:
             printf("Invalid day number");
    }
    return 0;
}*/

/*Q4. Write a menu driven program with the following options:
      1.check whether a given set of three numbers are lengths of an isosceles triangle or not
      2.check whether a given set of three numbers are lengths of sides of a right angled triangle or not
      3. check whether a given set of three numbers are equilateral triangle or not
      4.Exit
 */
/*int main()
{
  int a,b,c,h;
  int option;
  while(1)
  {
    printf("\n1.Isosceles Triangle\n");
    printf("2.Right Angled Triangle\n");
    printf("3.Equilateral Triangle\n");
    printf("4.Exit\n");
    printf("Enter your choice ");
    scanf("%d",&option);
    if(option==4);
    else
    {
      printf("Enter length of sides of triangle ");
      scanf("%d%d%d",&a,&b,&c);
      if(a+b>c&&a+c>b&&b+c>a);
      else
        option=5;
    }
    switch(option)
    {
        case 1:
            //  printf("Enter lengths of sides of triangle");
            //  scanf("%d%d%d",&a,&b,&c);
             if(a==b||a==c||b==c)
               printf("Given set of three numbers are lengths of Isosceles Triangle");
             else
              printf("Given set of three numbers are not the lengths of  Isosceles Triangle"); 
            break;
        case 2:
            // printf("Enter lengths of sides of triangle");
            // scanf("%d%d%d",&a,&b,&c);
            if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            {
                  printf("Given set of three numbers are length of Right Angled Triangle");
            }
            else
            {
                printf("Given set of three numbers are not lengths of Right Angled Triangle");
            }
            break;
        case 3:
            // printf("Enter the lengths of the sides of triangle ");
            // scanf("%d%d%d",&a,&b,&c);
            if(a==b&&a==c)
              printf("Given set of three numbers are lengths of Equilateral Triangle");
            else
             printf("Given set of three numbers are not lengths of Equilateral Triangle");
            break;
        case 4:
             exit(0);
        case 5:
             printf("You have entered invalid lengths of triangle!Retry");
             break;
       default:
             printf("Invalid choice!Retry");
    }
  }
  return 0;
}*/

/*Q5. Convert the following if-else-if construct into switch case
      if(var==1)
        printf("good");
      else if(var==2)
        printf("better");
      else if(var==3)
        printf("best");
      else
        printf("Invalid");
 */
/*int main()
{
    int var;
    printf("Enter a number ");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
              printf("good");
              break;
        case 2:
              printf("better");
              break;
        case 3:
              printf("best");
              break;
        default:
              printf("Invalid");
    }
    return 0;
}*/