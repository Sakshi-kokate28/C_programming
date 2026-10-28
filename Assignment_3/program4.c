#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    
    
    int iCnt = 0;

    for(int iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }

}

int main()
{
   int iValue = 0;
   int iCount = 0;

   printf("Enter Number :");
   scanf("%d", &iValue);

   printf("Enter Frequency :");
   scanf("%d",&iCount);

   Display(iValue,iCount);


    return 0;
}

//Testing of the code

/////////////////////////////////////
//    INPUT             OUTPUT                                       
////////////////////////////////////
//    12,3             12 12 12
//    8 ,4              8 8 8 8
//   -2 ,3              -2 -2 -2
//
//