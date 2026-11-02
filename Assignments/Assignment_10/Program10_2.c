///////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description   : Accepts length and width of a rectangle and calculates its area
//  Input         : Double, Double
//  Output        : Double
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


double RectArea(double iNo1,double iNo2)
{
    double RecArea=0.0;
    float PI=3.14;
    if(iNo1<0 || iNo2<0)
    {
        iNo1<-iNo1;
        iNo2<-iNo2;
    }
    RecArea=iNo1*iNo2;

    return RecArea;
}

int main()
{
   float fValue1=0.0f, fValue2=0.0f;
   float fRet=0.0f;
   printf("Enter the length:");
   scanf("%f",&fValue1);
    printf("Enter the width:");
   scanf("%f",&fValue2);
   fRet=RectArea(fValue1,fValue2);
   printf("Area of Circle is:%f",fRet);
    return EXIT_SUCCESS;
}