// 5 - Calculate Employee Bonus:
/* Problem Statement :Accept an employee monthly salary and completed year of service.Calculate the bonus using these rules: 
more than 10 years  of service earns a bonus of 15%  of montly salary; 5 to 10 years
 earns 10% ; less than 5 years earns  5%. Salary must be positive and year of service cannnot be negative.
*/

/* Excepted Output :
- Input 30000 12 > Bonus = 4500
 -Input 20000 7 > Bonus = 2000
 -Input 10000 2 > Bonus = 500
*/

#include<stdio.h>
#include<stdlib.h>
void CalculateEmployeeBonus(float fSalary ,int iYear)
{
    float fBonus = 0.0f;
    if(fSalary <= 0 || iYear < 0)
    {
        printf("Invalid Input");
        return;
    }
    else if(  (iYear > 10)) 
    {
        fBonus  = fSalary * 15/100;
    }
    else if(iYear >= 5 ) 
    {
         fBonus  = fSalary * 10/100;
    }
    else 
    {
         fBonus  = fSalary * 5/100;
    }
    
    printf("Salry is : %f", fBonus);

}
int main()
{

    float fSalary =0;
    int iYear =0;
    printf("Enter a Salary : ");
    scanf("%f",&fSalary );

    printf("Enter a Year :  ");
    scanf("%d", &iYear);

    CalculateEmployeeBonus(fSalary, iYear);
    return EXIT_SUCCESS;
}