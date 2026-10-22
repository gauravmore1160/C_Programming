///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description   : Accepts a number and checks whether it is even or odd
//  Input         : Integer
//  Output        : Boolean (True/False)
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool CheckEven(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }

    else
    {
        return false;
    }
}


int main()
{
    int iValue=0;
    bool iRet=false;
    printf("Enter the number: ");
    scanf("%d",&iValue);
    iRet=CheckEven(iValue);

    if(iRet==true)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }
    return EXIT_SUCCESS;
}