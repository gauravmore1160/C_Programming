///////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Accepts a number and checks whether it is divisible by 5
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
 
bool Check(int iNo1)
{

    if((iNo1 % 5)==0)
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
    bool iRet=false;
    printf("Enter the number: \n");
    scanf("%d\n",&iValue1);
    iRet=Check(iValue1);


    return EXIT_SUCCESS;
}