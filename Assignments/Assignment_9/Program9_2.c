///////////////////////////////////////////////////////////////////
//
//  Function Name : ConvertCurrency
//  Description   : Accepts an amount in US Dollar ($) and converts it into Indian Rupees (INR)
//  Input         : Integer
//  Output        : Integer
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int ConvertCurrency(int iNo)
{
    int iRs=0;
    if(iNo<0)
    {
        printf("Invalid Input");
    }

    iRs=iNo*70;
    return iRs;
    

}

int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter the Number");
   scanf("%d",&iValue);
   iRet=ConvertCurrency(iValue);
   printf("The conversion is:%d",iRet);
    return EXIT_SUCCESS;
}