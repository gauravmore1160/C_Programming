///////////////////////////////////////////////////////////////////
//
//  Function Name : CountFour
//  Description   : Accepts a number and returns the frequency of digit 4 in it
//  Input         : Integer
//  Output        : Integer (Count of digit 4)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountFour(int iNo)
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
        
        iNo=iNo/10;
        if(iDigit==4)
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
    printf("Enter the Number to Check Four count:\n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    
   
        printf("The Four Count is :%d ",iRet);  

    return EXIT_SUCCESS;
}