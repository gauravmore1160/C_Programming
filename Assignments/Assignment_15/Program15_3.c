#include<stdio.h>
#include<stdlib.h>
 typedef int BOOL;
 #define  true 1
#define false 0
///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description   : Accepts two numbers and checks whether they are equal
//  Input         : Integer, Integer
//  Output        : BOOL (1 / true if equal, 0 / false otherwise)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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

    int iValue1=0;
    int iValue2=0;
    BOOL bRet=false;
    printf("Enter your First number:");
    scanf("%d",&iValue1);
    printf("Enter your Second number:");
    scanf("%d",&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Both the numbers are Equal");
    }
    else
    {   
        printf(" Both the numbers are Not Equal");
    }


    return EXIT_SUCCESS;
}