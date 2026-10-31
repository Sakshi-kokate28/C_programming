/* -Calculate Shopping Discount
 Promblem Statement : Accept the total purchase amount and calculate the final payable amount after applying the following 
 discount .Negative purchase amount are invalid.

  Purchase Amount           Discount
  Below Rs 1000               0%
              
  Rs 1000 to below rs         10%
  Rs 5000 

  Rs 5000 and above           20%

*/

/*
 Excepted  Output : 
 - Input 800 > Payable Amount  = 800
 - Input 2000 > Payable Amount  = 1800
 - Input 6000 > Payable Amount = 4800 


*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount");
        return;
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0;
        fFinalAmount = fAmount;
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 10 / 100;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
        fDiscount = fAmount * 20 / 100;
        fFinalAmount = fAmount - fDiscount;
    }

    printf("Final Amount : %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
