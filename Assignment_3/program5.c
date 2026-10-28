#include<stdio.h>

#define true 1
#define false 0

typedef int BOOL;

 BOOL CheckEven( int iNo)
 {
    if(iNo%2 ==0)
    {
        printf("Number is even :");
    }
    else
    {
        printf("Number is odd");
    }
 }

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = CheckEven(iValue);

    return 0;



}
