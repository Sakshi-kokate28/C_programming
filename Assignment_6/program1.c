/* 1- Calculate Electricity Bill
 Problem Statement : Accept the number of electricity units consumed and calculate the total bill using the following 
 slab-wise rates. Each slab rate applies only to units within that slab.

      Units            Rate
   consumed
    First 100          Ru.5 per unit
    unit

    Next 100           Rs. 7 per unit
    units

    Above  200         Rs. 10 per unit
    units

   Excepted Output :
   Input 80 > Bill = 400.00
   Input 150 > Bill = 850.00
   Input 250 > Bill = 1700.00

*/
#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    if((iUnits<= 100) && (iUnits >= 0))
    {
        fBill = iUnits * 5;
    }
    else if (iUnits<= 200)
    {
        fBill = (100 *5) + (iUnits -100) * 7 ;
    }
     else if(iUnits > 200)
    {
       fBill = (100 * 5) +(100 * 7)+(iUnits-200)*10;
    }
    else{

        printf("Invalid Unit Consumption");
    }

    printf("Electricity Bill = %f ",fBill);
}

int main()
{
    int iUnits =0;
     printf("Enter Consumed units : ");
     scanf("%d", &iUnits);

     CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}