///////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : Accepts a number from user and prints its first 5 multiples.
//  Input         : Integer
//  Output        : Multiples Sequence
//  Author        : Gaurav More
//  Date          : 30/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    int iMul=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        iMul=iNo*iCnt;
        printf("%d\n",iMul);
        
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d\n",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;

}