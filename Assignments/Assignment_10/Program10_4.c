///////////////////////////////////////////////////////////////////
//
//  Function Name : FHtoCS
//  Description   : Accepts temperature in Fahrenheit and converts it into Celsius
//  Input         : Float
//  Output        : Double
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FHtoCS(float fTemp)
{
    double Cconv=1.0;
    float Celsius=0.0;
    Celsius=5.0 / 9.0;
    Cconv=(fTemp-32.0)*Celsius;
    return Cconv;
}

int main()
{
   float fValue=0.0f;
   double fRet=0.0;
   printf("Enter the Fahrenheit:\n");
   scanf("%f",&fValue);
   fRet=FHtoCS(fValue);
   printf("The conversion to celsius is:%f",fRet);
    return EXIT_SUCCESS;
}