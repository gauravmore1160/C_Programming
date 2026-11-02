///////////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description   : Accepts distance in kilometers and converts it into meters
//  Input         : Integer
//  Output        : Integer
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int Meter=0;
    if(iNo<0)
    {
       iNo=-iNo;
    }

    Meter=iNo*1000;
    return Meter;
    

}

int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter the Kilometer");
   scanf("%d",&iValue);
   iRet=KMtoMeter(iValue);
   printf("The conversion to Meter is:%d",iRet);
    return EXIT_SUCCESS;
}