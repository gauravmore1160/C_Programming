///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number from user and prints that number of '$' and '*' patterns.
//  Input         : Integer
//  Output        : Screen Pattern
//  Author        : Gaurav More
//  Date          : 30/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        
        printf("$\t");
        printf("*\t");
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d\n",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;

}