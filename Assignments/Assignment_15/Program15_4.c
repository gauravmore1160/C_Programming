#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : Multipy
//  Description   : Accepts three numbers and returns their multiplication product
//  Input         : Integer, Integer, Integer
//  Output        : Integer (Multiplication product)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////

int Multipy(int iNo1,int iNo2,int iNo3)
{
    int iMul=0;

    iMul=iNo1*iNo2*iNo3;
    return iMul;
}


int main()
{

    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("Enter your First number:");
    scanf("%d",&iValue1);

    printf("Enter your Second number:");
    scanf("%d",&iValue2);

    printf("Enter your Third number:");
    scanf("%d",&iValue3);


    iRet=Multipy(iValue1,iValue2,iValue3);

    printf("The mmultiplication of 3 numbers are:%d",iRet);
    return EXIT_SUCCESS;
}