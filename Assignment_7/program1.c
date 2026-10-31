// 1 - Write a program which accept number from user and print that number of $ and * on the Screen.

/*
 Input : 5
 Output: $ * $ * $ * $ * $ *

 Input : 3
 output : $ * $ * $ *

 Input : -3
 Output : $ * $ * $ *
*/

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
   int iCnt = 0;

    for(int iCnt = 1; iCnt  <= iNo; iCnt++ )
    {
        printf(" $ \t * \t", iNo);
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