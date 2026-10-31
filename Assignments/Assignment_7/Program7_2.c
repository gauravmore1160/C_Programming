///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number from user and prints numbers from 1 to that number.
//  Input         : Integer
//  Output        : Screen Sequence
//  Author        : Gaurav More
//  Date          : 30/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        
        printf("%d\t",iCnt);
        
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d\n",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}