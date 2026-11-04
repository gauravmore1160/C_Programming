///////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Accepts a number and returns the count of even digits in it
//  Input         : Integer
//  Output        : Integer (Count of even digits)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountEven(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        
        
        if(iDigit%2==0)
        {
            iCount++;
        }
         iNo=iNo/10;
        
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number to Check number less than 6:\n");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    
   
        printf("Digit which are Even:%d ",iRet);  

    return EXIT_SUCCESS;
}