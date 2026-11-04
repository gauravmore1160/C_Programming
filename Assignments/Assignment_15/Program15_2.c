#include<stdio.h>
#include<stdlib.h>
 typedef int BOOL;
 #define  true 1
#define false 0
///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description   : Accepts a number and checks whether it is greater than 100
//  Input         : Integer
//  Output        : BOOL (1 / true if > 100, 0 / false otherwise)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
BOOL ChkGreater(int iNo)
{
    if(iNo>100)
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
    BOOL bRet=false;
    printf("Enter your number:");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {   
        printf("Smaller");
    }


    return EXIT_SUCCESS;
}