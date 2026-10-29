// Check Leap year 
/* Problem Statement :Accept a year and determine whether it is a leap year according to Grogorian calender rules. 
  A year is a leap year if it is divisible by 400 , or divisible by 4 but not by 100 .Consider year less than or equal to zero invalid */

  // Expected Output :
  //Input 2024 > Leap year 

  //Input 1900 > Not leap year

  // Input 2000 > Leap year 

  #include<stdio.h>
  #include<stdlib.h>
  void CheckLeapYear(int iYear)
  {
    if(iYear % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
  }
  int main()
  {
    int iYear = 0;
    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
  }
