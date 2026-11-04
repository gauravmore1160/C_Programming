///////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description   : Accepts a number and returns the count of digits less than 6
//  Input         : Integer
//  Output        : Integer (Count of digits < 6)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Count(int iNo)
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
        
        
        if(iDigit<6)
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

    iRet=Count(iValue);
    
   
        printf("The Frequnecy of number less than 6   :%d ",iRet);  

    return EXIT_SUCCESS;
}