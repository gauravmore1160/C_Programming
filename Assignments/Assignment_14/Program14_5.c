#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description   : Accepts a number and returns the difference between summation of all its factors and non-factors
//  Input         : Integer
//  Output        : Integer (Sum of factors - Sum of non-factors)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
int FactDiff(int iNo)
{
    int iCnt=0;
    int FSum=0;
    int NFSum=0;
    int iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    
   for(iCnt=1;iCnt<iNo;iCnt++)
   {
        if(iNo%iCnt==0)
        {
            FSum=FSum+iCnt;
        }
        else
        {
            
            NFSum=NFSum+iCnt;
        }
   }
        iDiff=FSum-NFSum;
        return iDiff;
  
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enter the Number to Show its non factor:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("The Summation of non factors are:%d\t",iRet);

    
    return EXIT_SUCCESS;

}