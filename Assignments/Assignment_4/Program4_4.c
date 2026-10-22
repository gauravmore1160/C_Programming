///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckAge
//  Description   : Accepts age and checks eligibility for voting
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAge( int iNo)
{
    if(iNo <18)
    {
        printf(" Not Eligible for voting");
    }
    else{printf("Eligible for voting");}

}




int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    CheckAge(iValue);
    return EXIT_SUCCESS;
}