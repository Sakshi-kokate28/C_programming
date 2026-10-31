// 1 - Write a program which accept number from user and print that number till that number.

/*
 Input : 8
 Output: 1 2 3 4  5 6 7 8

 
*/

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
   int iCnt = 0;

    for(int iCnt = 1; iCnt  <= iNo; iCnt++ )
    {
        printf( "%d\t",iCnt);
    }

}
int main()
{
    int iValue =0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}