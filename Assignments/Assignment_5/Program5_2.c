///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeap
//  Description   : Accepts a year and checks whether it is a leap year
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLeap( int iNo)
{
    if(iNo%400==0   || iNo % 4==0 && iNo%100!=0)
    {      
        printf("The year is leap year");
    }
    else
    {printf("The year is not leap year");}
}

int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    CheckLeap(iValue);
    return EXIT_SUCCESS;
}