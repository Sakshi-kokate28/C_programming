// 5- Identify Character Type
/* Problem Staement : Accept a Single character and determine whether it is an uppercase alphabet,lowercase alphabet,digit, or special 
  Character . Use character comparison without using library character classification function.
*/
// Expected Output:
// Input A > Uppercase Alphabet
// Input m > Lowercase Alphabet
// Input 7 > Digit
// Input @ > Special Charcter

#include<stdio.h>
#include<stdlib.h>
void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') &&(cValue <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }
    else if((cValue >= 'a') &&(cValue <= 'z'))
    {
        printf("Lowercase Alphabet");
    }
    else if((cValue >= '0')&&(cValue <='9' ))
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a Character : ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}