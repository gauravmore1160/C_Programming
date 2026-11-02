///////////////////////////////////////////////////////////////////
//
//  Function Name : PrintRevTable
//  Description   : Accepts a number and prints its multiplication table in reverse order
//  Input         : Integer
//  Output        : Integer
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void PrintRevTable(int iNo)
{
    int iCnt=0;
    int iTable=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    for(iCnt=10;iCnt>=1;iCnt--)
    {   
        iTable=iNo*iCnt; 
        printf("%d * %d = %d\n",iNo,iCnt,iTable);  
    }
}

int main()
{

   int iValue=0;
   int iRet=0;

   printf("Enter the Number");
   scanf("%d",&iValue);
    PrintRevTable(iValue);

   
    return EXIT_SUCCESS;
}