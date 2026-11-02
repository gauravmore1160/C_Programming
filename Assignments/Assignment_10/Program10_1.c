///////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : Accepts radius of a circle and calculates its area
//  Input         : Double
//  Output        : Double
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


double CircleArea(double iNo)
{
    double CArea=0.0;
    float PI=3.14;
    if(iNo<0)
    {
        iNo<-iNo;
    }
    CArea=PI*iNo*iNo;

    return CArea;
    

}

int main()
{
   float fValue=0.0f;
   float fRet=0.0f;
   printf("Enter the Number:");
   scanf("%f",&fValue);
   fRet=CircleArea(fValue);
   printf("Area of Circle is:%f",fRet);
    return EXIT_SUCCESS;
}