// 5 - Check Divisibility
// Problem Statement : Accept an integer and determine  whether it is divisible  by 5 without leaving any remainder.

// Expected Output :
// Input 45 > Divisible by 5 
// Input 23 > Not Divisible by 5



#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
   else
    {
        printf("Not Eligible by 5");
    }
}
 
int main()
{
    int iValue = 0;

    printf("Enter a Number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);
    return 0;
}