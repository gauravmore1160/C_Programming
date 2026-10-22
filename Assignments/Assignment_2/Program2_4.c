
///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts two numbers and prints first number second number times
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo1,int iNo2)
{
    int iCnt=0;
   for(iCnt=1;iCnt<=iNo2;iCnt++)
   {
    printf("%d \n",iNo1);
   }
}


int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter the First number: \n");
    scanf("%d",&iValue1);

    printf("Enter the First number: \n");
    scanf("%d",&iValue2);
    
        
    
    
    Display(iValue1,iValue2);
    return EXIT_SUCCESS;
}