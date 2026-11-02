///////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : Accepts area in square feet and converts it into square meters
//  Input         : Integer
//  Output        : Double
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    double SqMeter=0.0;
    if(iNo<0)
    {
       iNo=-iNo;
    }
    SqMeter=iNo*0.0929;
    return SqMeter;
}

int main()
{
   int iValue=0;
   double dRet=0.0;
   printf("Enter the Square feet:");
   scanf("%d",&iValue);
   dRet=SquareMeter(iValue);
   printf("The conversion from Square meter to Square feet is:%f",dRet);
    return EXIT_SUCCESS;
}