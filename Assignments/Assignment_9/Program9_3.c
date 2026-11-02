///////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : Accepts a number and returns the factorial of its even numbers/factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {   
        if(iCnt%2==0)
        {
        iFact=iFact*iCnt;
        }   
    }
    return iFact;

}

int main()
{

   int iValue=0;
   int iRet=0;

   printf("Enter the Number");
   scanf("%d",&iValue);
   iRet=EvenFactorial(iValue);

   printf("The factorial of %d of even factors is:%d",iValue,iRet);
    return EXIT_SUCCESS;
}