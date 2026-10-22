///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisible
//  Description   : Accepts a number and checks whether it is divisible by 5
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible( int iNo)
{
    if(iNo % 5==0)
    {
        printf("The Number is Divisible by 5");
    }
    else{printf("The number is is not Divisible by 5");}
}

int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    CheckDivisible(iValue);
    return EXIT_SUCCESS;
}