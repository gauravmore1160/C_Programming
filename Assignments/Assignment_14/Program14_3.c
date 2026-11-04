#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description   : Accepts a number and displays all its non-factors
//  Input         : Integer
//  Output        : Non-factors printed on console
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
void NonFact(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    printf("The Non Factors are:");
    
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
   
        if(iNo%iCnt!=0)
        {
            printf(" %d\t",iCnt);
        }
   }
  
}
int main()
{
    int iValue=0;
    
    printf("Enter the Number to Show its non factor:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    
    return EXIT_SUCCESS;

}