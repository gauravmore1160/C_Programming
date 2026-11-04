///////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description   : Accepts a number and returns the difference between summation of even digits and odd digits
//  Input         : Integer
//  Output        : Integer (Even digits sum - Odd digits sum)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountDiff(int iNo)
{
    int iDigit=0;
    int eSum=0;
    int oSum=0;
    int iDiff=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        
        if(iDigit%2==0)
        {
            eSum=eSum+iDigit;
        }
        else
        {
            oSum=oSum+iDigit;
        }
        iNo=iNo/10;
    }
    iDiff=eSum-oSum; 
    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

        printf("Diffrence between even digit and odd digit summation is: %d ",iRet);  

    return EXIT_SUCCESS;
}