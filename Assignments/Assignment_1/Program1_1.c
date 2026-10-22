///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDivide
//  Description   : Accepts two numbers and performs division operation
//  Input         : Integer, Integer
//  Output        : Integer
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DisplayDivide(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo1<0 || iNo2<0)
    {
        return -1;
    }

    iAns=iNo2/iNo1;
    return iAns;
}



int main()
{
    int iValue1=5, iVlaue2=15;
    int iRet=0;

    iRet=DisplayDivide(iValue1,iVlaue2);

    printf("the Division is: %d",iRet);



    return EXIT_SUCCESS;
}