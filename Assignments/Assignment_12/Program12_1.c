///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Accepts a number and displays its digits in reverse order
//  Input         : Integer
//  Output        : Digits printed line-by-line on console
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        printf("%d\n",iDigit);
    }
}

int main()
{
    int iValue=0;
    printf("Enter the Number to Reverse:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);



    return EXIT_SUCCESS;
}