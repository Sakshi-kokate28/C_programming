// - 4 Check Triangle Validity
/*
Problem statemet : Accept three integer values representing the length of the sides of a triangle .Determine whether they can from 
a valid triangle. all sides must be positive , and the sum of any two sides must be greater than the third side.
*/
/* Excepted Output :
 - Input  3 4 5 > Valid Triangle 
 - Input 1 2 3 > InValid Triangle
 - Input 0 4 5 > Invalid Triangle

*/

#include<stdio.h>
#include<stdlib.h>
void CheckTriangle (int iSide1, int iSide2,int iSide3)
{
    if((iSide1 <= 0 ) && (iSide2 <= 0) &&(iSide3 <=0))
    {
        printf("Invalid Triangle");
    }
    else if((iSide1 + iSide2 > iSide3)&&
            (iSide2 + iSide3 > iSide1)&&
            (iSide1 + iSide3 > iSide2))
    {
        printf("Valide Triangle");
    }
    else{
        printf("Invalid Triangle");

    }
    
}
int main()
{ 
    int iSide1 = 0, iSide2 = 0, iSide3= 0;

    printf("Enter first side : ");
    scanf("%d",&iSide1);

    printf("Enter second side : ");
    scanf("%d",&iSide2);

    printf("Enter third side : ");
    scanf("%d",&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);


    return EXIT_SUCCESS;
}