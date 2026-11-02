///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Description   : Accepts a number and checks whether it is small, medium, or greater
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo<=50)
    {
        printf("Number is Small");
    }
    else if(iNo>50 && iNo<=100)
    {
        printf("Number is Medium");
    }
    else
    {
        printf("Number is Greater");
    }

}

int main()
{
   int iValue=0;
   printf("Enter the Number");
   scanf("%d",&iValue);
   CheckNumber(iValue);
    return EXIT_SUCCESS;
}