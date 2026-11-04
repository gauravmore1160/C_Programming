#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description   : Accepts a number and returns the multiplication of all its factors
//  Input         : Integer
//  Output        : Integer (Multiplication product of factors)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
int MultFact(int iNo)
{
    int iCnt=0;
    int iMul=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=1;iCnt<=iNo/2;iCnt++)
   {
        if(iNo%iCnt==0)
        {
            iMul=iMul*iCnt;
        }
   }
    return iMul;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number to Multiply digits factor:\n");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("Multiplication of digits are:%d ",iRet);
    return EXIT_SUCCESS;

}