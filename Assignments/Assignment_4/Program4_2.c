///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Accepts a number and checks whether it is even or odd
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd( int iNo)
{
    if(iNo % 2==0)
    {
        printf("The Number is Even");
    }
    else{printf("The number is Odd");}

}




int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}