//  1  - Check Whether a Number is positive or negative

// problem Statement : Write a C program that accepts an integer from the user and determines whether the entered number is positive , negative or zero

// Expected Output 
// Input 15 > Positive Number
// Input 8 > Negative  Number
// Input 0 > Zero

#include<stdio.h>
#include<stdlib.h>
void CheckNumber (int iNo)
{

    if(iNo > 0)
    {
        printf("Number is Positive ");
    }
    else if(iNo < 0)
    {
        printf("Number is Negative");
    }else
    {
        printf("Number is Zero");
    }


}
int main()
{
    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    return 0;
}