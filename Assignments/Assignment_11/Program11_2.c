///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : Accepts range from user and displays all even numbers in between
//  Input         : Integer, Integer
//  Output        : Even numbers printed on console
//  Author        : Gaurav More
//  Date          : 03/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt=0;
    printf("The  Even Range between these number are:");
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
        printf("%d\t",iCnt);
        }
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

    RangeDisplayEven(iValue1,iValue2);
    return EXIT_SUCCESS;
}