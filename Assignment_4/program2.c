// 2 - Check Even or odd Number

// Problem Statement : Accept an integer from the user and determine whetherb  it is even or odd . an even number is completely divisible by 2.


// Expected Output:

// Input : 24 > Even Number
// Input :17 > odd Number

#include <stdio.h>
#include <stdlib.h>
void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is Even ");
    }
    else 
    {
        printf("Number is odd");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}


