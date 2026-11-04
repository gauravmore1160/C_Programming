///////////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Description   : Accepts a number and returns the multiplication of all its digits
//  Input         : Integer
//  Output        : Integer (Multiplication product of digits)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountBtw(int iNo)
{
    int iDigit=0;
    int iMul=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        
        iMul=iMul*iDigit;
      
        iNo=iNo/10;
        
    }
    return iMul;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number to Multiply digits:\n");
    scanf("%d",&iValue);

    iRet=CountBtw(iValue);
    
   
        printf("Multiplication of digits are:%d ",iRet);  

    return EXIT_SUCCESS;
}