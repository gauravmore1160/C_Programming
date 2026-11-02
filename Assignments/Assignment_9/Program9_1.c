///////////////////////////////////////////////////////////////////
//
//  Function Name : PrintPattern
//  Description   : Accepts a number and prints that many * and # patterns on screen
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void PrintPattern(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {   
         printf("*");
         printf("#");
    }
}

int main()
{

   int iValue=0;
   

   printf("Enter the Number");
   scanf("%d",&iValue);
    PrintPattern(iValue);

    return EXIT_SUCCESS;
}