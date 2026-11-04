#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description   : Accepts a number and returns the summation of all its non-factors
//  Input         : Integer
//  Output        : Integer (Summation of non-factors)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    printf("The Non Factors are:");
    
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
   
        if(iNo%iCnt!=0)
        {
            iSum=iSum+iCnt;
        }
   }
   return iSum;
  
}
int main()
{
    int iValue=0;
    int iRet=0;
    
    printf("Enter the Number to Show its non factor:\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("The Summation of non factors are:%d\t",iRet);

    
    return EXIT_SUCCESS;

}