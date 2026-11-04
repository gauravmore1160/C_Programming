#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description   : Accepts a number and displays its factors in reverse order
//  Input         : Integer
//  Output        : Factors printed in reverse on console
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
     printf("Reverse order of factor are : ");
   for(iCnt=iNo/2;iCnt>=1;iCnt--)
   {
   
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
   }
  
}
int main()
{
    int iValue=0;
    
    printf("Enter the Number to Multiply digits factor:\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    
    return EXIT_SUCCESS;

}