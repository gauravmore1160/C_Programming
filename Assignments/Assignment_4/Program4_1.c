///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Description   : Accepts a number and checks whether it is positive or negative
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber( int iNo)
{
    if(iNo<0)
    {
        printf("The Number is Negative");
    }
    else{printf("The number is Positive");}

}




int main()
{
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    CheckNumber(iValue);
    return EXIT_SUCCESS;
}