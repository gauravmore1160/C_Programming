///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description   : Accepts a number and checks whether it contains zero in it
//  Input         : Integer
//  Output        : BOOL (1 / true if zero present, 0 / false otherwise)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;
    if(iNo==0)
    {
        return true;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        
        if(iDigit==0)
        {
            return true;
        }
        iNo=iNo/10;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=false;
    printf("Enter the Number to Check Zero:\n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);
    
    if(bRet==true)
    {
        printf("The Number Contain Zero");  
    }
    else
    {
        printf("The Number not contain Zero");
    }



    return EXIT_SUCCESS;
}