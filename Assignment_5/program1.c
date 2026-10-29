// 1- Find the Greatest of Three Numbe.

// Problem Statement : Accept three integers and determine the greatest  number  among  them . The program must also work correctly when two or all three numbers are equal.


// Expected Output : 

// Input 10 50  30 > 50 is Greatest

// Input 40 40 20 > 40 is Greatest

// Input 15 15 15 > 15 is Greatest

#include <stdio.h>
#include<stdlib.h>
void FindGreatest(int iFirst , int iSecond, int iThird)
{
    if(iFirst > iSecond)
    {
        printf("%d is the Greatest Number", iFirst);
    }
    else if(iSecond > iThird)
    {
        printf("%d is the Greatest Number", iSecond);

    }
    else
    {
        printf("%d is the Greatest Number", iThird);
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 =0 , iValue3 = 0;
    
    printf("Enter a First Number :");
    scanf("%d", &iValue1);

    printf("Enter a Second Number :");
    scanf("%d", &iValue2);

     printf("Enter a Third Number :");
    scanf("%d", &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return 0;
}