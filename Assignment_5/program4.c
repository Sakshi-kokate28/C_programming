// 4 - Check Divisibility by 3 and 5
// Problem Statement : Accept an integer and determine whether it is divisible by both 3 and 5 ,only 3 ,only 5 or neither.


  #include<stdio.h>
  #include<stdlib.h>
  void CheckDivisibility(int iNo)
  {
    if((iNo % 3 ==0) && (iNo % 5 == 0))
    {
        printf("Divisible by Both");
    }
    else if(iNo % 3 ==0)
    {
        printf("Only Divisible by 3");
    }
    else if(iNo % 5 ==0)
    {
        printf("Only Divisible by 5");
    }
    else
    {
        printf("Not Divisible by Both");
    }


  }
  int main()
  {
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
  }
