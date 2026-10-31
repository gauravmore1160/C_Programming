///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayOdd
//  Description   : Accepts a number from user and prints all odd numbers up to that number.
//  Input         : Integer
//  Output        : Odd Numbers Sequence
//  Author        : Gaurav More
//  Date          : 30/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int iNo)
{
    int iCnt=0;
      if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
         if(iCnt%2!=0)
        {
        printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d\n",&iValue);

    DisplayOdd(iValue);

    return EXIT_SUCCESS;

}