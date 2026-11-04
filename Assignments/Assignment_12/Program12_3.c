///////////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description   : Accepts a number and returns the frequency of digit 2 in it
//  Input         : Integer
//  Output        : Integer (Count of digit 2)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int CountTwo(int iNo)
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
        if(iDigit==2)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number to Check two count:\n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);
    
   
        printf("The Two Count is :%d ",iRet);  

    return EXIT_SUCCESS;
}