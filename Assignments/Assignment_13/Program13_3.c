///////////////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description   : Accepts a number and returns the count of digits between 3 and 7 (4, 5, 6)
//  Input         : Integer
//  Output        : Integer (Count of digits between 3 and 7)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountBtw(int iNo)
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
        
        
        if(iDigit>3 && iDigit<7)
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
    printf("Enter the Number to Check number which are Between 3 and 7:\n");
    scanf("%d",&iValue);

    iRet=CountBtw(iValue);
    
   
        printf("Digit which are Betwen 3 and 7:%d ",iRet);  

    return EXIT_SUCCESS;
}