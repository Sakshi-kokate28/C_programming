// 3 - Find the greater of two number

// problem statement : Accept two integers and determine which number is greater. if both numbers are display an appropriate message.

// Expected Output :

// Input 10 20 > 20 is greater

// Input 50 30 > 50 is greater

// Input 15 15 > both Numbers are equal

#include<stdio.h>
#include<stdlib.h>
void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
         printf("%d is greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
         printf("%d is greater\n", iSecond);
    }
    else 
    {
        printf(" %d Numbers are Equal\n");
    }
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a First Number :");
    scanf("%d", &iValue1);

    printf("Enter a Second Number :");
    scanf("%d", &iValue2);

    
    FindGreater(iValue1, iValue2);
    return 0;
}
