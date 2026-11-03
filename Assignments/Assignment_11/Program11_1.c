///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description   : Accepts range from user and displays all numbers in between
//  Input         : Integer, Integer
//  Output        : Numbers printed on console
//  Author        : Gaurav More
//  Date          : 03/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    printf("The Range between these number are:");
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the starting Number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Number:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return EXIT_SUCCESS;
}