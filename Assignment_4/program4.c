// 4 - Check Voting Eligibility
// Problem Statement : Accept the age of a person and detemine whether the person is eligible to vote. A person must be at least 18 years old to vote.
// a negative age should be considered invalid.

// Expected Output :
// Input 21 > Eligible for voting 
// Input 16 > Not Eligible for Voting 
// Input -5 > Invalid  Age


#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else if(iAge <= 18 )
    {
        printf("Not Eligible for Voting");
    
    }
    else
    {
        printf("Invalid Age");
    }
}
 
int main()
{
    int iValue = 0;

    printf("Enter a Age : ");
    scanf("%d", &iValue);

    CheckVotingEligibility(iValue);
    return 0;
}